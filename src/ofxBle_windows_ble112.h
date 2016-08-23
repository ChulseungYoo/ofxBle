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
		bd_addr target = { 0xc4, 0xbe, 0x84, 0x59, 0x6b, 0xf1 };

		// API needs address reversed
		reverseArray(target.addr, sizeof(target.addr));

		// BLE settings
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
//		printf("[>] ble_cmd_system_reset\n");
//		ble_cmd_system_reset(0); //Reboot normal program

//		if (wait_for_evt() != APP_OK) {
//			die();
//		}
		// But wait a second until device boots up
//		printf("    sleep some (wait for device to boot)\n");
//		sleep(1000);

		// get connection status, current command will be handled in response
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



	int8 wait_for_rsp() {
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

			}
		}
		return APP_OK;
	}



	int8 wait_for_evt() {
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
				break;;
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
		ble_cmd_connection_disconnect(0x01);
		wait_for_rsp();
		startThread();
	}

private:
	// Storage to hold recently received data
	uint8 value_buffer[256] = { 0 };
	uint64_t m_time;
	int m_retry_count;
};

#endif // _OFXBLE_WINDOWS_BLE112_H
