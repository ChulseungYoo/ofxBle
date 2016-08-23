#ifndef _OFXBLE_WINDOWS_BLE112_H
#define	_OFXBLE_WINDOWS_BLE112_H


#include "ofxBle\src\Bled112Serial.h"
#include "ofxBle\libs\ble112\src\utils.h"

class ofxBleThread: public ofThread {
public:

	static ofEvent<uint16_t> onAcceleratorX;
	static ofEvent<uint16_t> onAcceleratorY;


	// ----- CONSTRUCTOR -----
	ofxBleThread() {


		Bled112Serial::InitSerial("COM9", 115200);
		bglib_output = Bled112Serial::WriteBleMessage;

		// Target MAC address
		// TODO(you): change this to the address of your target BLE board
		bd_addr target = { 0xc4, 0xbe, 0x84, 0x58, 0xa1, 0x76 };

		// API needs address reversed
		reverseArray(target.addr, sizeof(target.addr));

		// BLE settings
		app_connection.handle = 0xff;
		app_connection.addr_type = 0;
		app_connection.target = target;
		app_connection.conn_interval_min = 80;      /*100ms*/
		app_connection.conn_interval_max = 3200;    /*1s*/
		app_connection.timeout = 1000;              /*10s*/
		app_connection.latency = 0;                 /*0ms*/
		app_connection.addr_type = 0;

		// Provide place to store data
		app_attclient.value.data = value_buffer;
		app_attclient.value.len = 0;

		// Initialize status flags
		app_connection.state = APP_DEVICE_INIT;
		app_attclient.state = 0;
		app_state = 0;

		/* BLE system reset */
		//printf("[>] ble_cmd_system_reset\n");
		//ble_cmd_system_reset(0); //Reboot normal program

		//if (wait_for_evt() != APP_OK) {
		//	die();
		//}
		// But wait a second until device boots up
		//printf("    sleep some (wait for device to boot)\n");
		//sleep(1000);

		// get connection status, current command will be handled in response
		ble_cmd_system_get_connections();
		if (wait_for_rsp() != APP_OK) {
			die();
		}
		if (wait_for_evt(1000000) != APP_OK)
		{
			die();
		}
		if (0xff != app_connection.handle)
		{
			ble_cmd_connection_disconnect(app_connection.handle);
		}
		if (wait_for_rsp() != APP_OK)
		{
			die();
		}
		
		printf("[>] ble_cmd_connection_get_status\n");
		ble_cmd_connection_get_status(0);
		if (wait_for_rsp() != APP_OK) {
			die();
		}
		if (wait_for_evt() != APP_OK) {
			die();
		}
		ble_cmd_gap_set_scan_parameters(0x4b, 0x32, 0);
		if (wait_for_rsp() != APP_OK) {
			die();
		}
	}



	// the thread function
	void threadedFunction() {

		printf("entered threadedFunction\n");;

		struct ble_header api_header;

		while (isThreadRunning()) {

			//printf("thread is running\n");
			wait_for_evt();
			yield();

		}
	}



	int8 wait_for_rsp(uint64_t count=100000) {
		uint64_t waiting = count;
		ble_header api_header = { 0, };

		setFlag(app_state, APP_COMMAND_PENDING);

		while (issetFlag(app_state, APP_COMMAND_PENDING)) {
			if (4 == Bled112Serial::ReadBleHeader(api_header))
			{
				if (Bled112Serial::ReadBleMessage(api_header)) {
					printf("Error reading message\n");
					return APP_FAILURE;
				}
			}
			else
			{
				if (0 == waiting--)
				{
					break;
				}
			}
		}
		return APP_OK;
	}



	int8 wait_for_evt(uint64_t count=100000) {
		uint64_t waiting = count;
		ble_header api_header={ 0, };

		setFlag(app_state, APP_ATTCLIENT_PENDING);

		while (issetFlag(app_state, APP_ATTCLIENT_PENDING)) {
			if (4 == Bled112Serial::ReadBleHeader(api_header))
			{
				if (Bled112Serial::ReadBleMessage(api_header)) {
					printf("Error reading message\n");
					return APP_FAILURE;
				}
			}
			else
			{
				if (0 == waiting--)
				{
					clearFlag(app_state, APP_ATTCLIENT_PENDING);
					break;
				}
			}
		}
		return APP_OK;
	}



	void die() {
		printf("Failure. End of program...\n");
		exit(-1);
	}

	void setPendingTimer(int duration_ms) {
		
	}

	void StartScan()
	{
		if (isThreadRunning())
		{
			waitForThread(true);
		}
		printf("[>] ble_cmd_gap_discover\n");
		ble_cmd_gap_discover(1);
		wait_for_rsp();
		startThread();
	}

	void StopScan()
	{
		if (isThreadRunning())
		{
			waitForThread(true);
		}
		printf("[>] ble_cmd_gap_end_procedure\n");
		ble_cmd_gap_end_procedure();
		wait_for_rsp();
		startThread();
	}

	void Connect()
	{
		if (isThreadRunning())
		{
			waitForThread(true);
		}
		printf("[>] ble_cmd_gap_connect_direct\n");
		ble_cmd_gap_connect_direct(app_connection.target.addr,
								   app_connection.addr_type,
								   app_connection.conn_interval_min,
								   app_connection.conn_interval_max,
								   app_connection.timeout,
								   app_connection.latency);
		wait_for_rsp();
		startThread();
	}
	void Disconnect()
	{
		if (isThreadRunning())
		{
			waitForThread(true);
		}
		printf("[>] ble_cmd_connection_disconnect\n");
		ble_cmd_connection_disconnect(app_connection.handle);
		wait_for_rsp();
		startThread();
	}

	void EndpointRX()
	{
		if (isThreadRunning())
		{
			waitForThread(true);
		}
		printf("[>] ble_cmd_system_endpoint_rx\n");
		ble_cmd_system_endpoint_rx(0, 5);
		wait_for_rsp();
		startThread();
	}

	void EndpointTX()
	{
		if (isThreadRunning())
		{
			waitForThread(true);
		}
		printf("[>] ble_cmd_system_endpoint_tx\n");
		uint8 data[5] = {0x02, 0x05, 0x0f, 0x03, 0x03};
		uint8array arr_data{ 5, *data };
		uint8 endpoint=0;
		ble_cmd_system_endpoint_tx(endpoint, arr_data.len, arr_data.data);
		wait_for_rsp();
		startThread();
	}

	void GATTReadClient()
	{
		if (isThreadRunning())
		{
			waitForThread(true);
		}
		printf("[>] ble_cmd_attclient_read_by_handle\n");
		ble_cmd_attclient_read_by_handle(app_connection.handle, 0x1f);
		wait_for_rsp();
		startThread();
	}

	void RawTx()
	{
		if (isThreadRunning())
		{
			waitForThread(true);
		}
		printf("[>] ble_cmd_connection_raw_tx\n");

		uint8 data[] = { 0x02, 0x05, 0x0f, 0x03, 0x03 };
		ble_cmd_connection_raw_tx(app_connection.handle, 5,data);
		wait_for_rsp();
		startThread();
	}

private:
	// Storage to hold recently received data
	uint8 value_buffer[256] = { 0 };
};

#endif // _OFXBLE_WINDOWS_BLE112_H
