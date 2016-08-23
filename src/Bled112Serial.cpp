#include "Bled112Serial.h"

ofSerial * Bled112Serial::m_serial=NULL;

void Bled112Serial::InitSerial(string port, uint32 baud_rate)
{	
	m_serial = new ofSerial();
	m_serial->listDevices();
	if (!m_serial->setup(port, baud_rate))
	{
		ofLog(OF_LOG_ERROR, "Serial setup failed : " + port);
	}
}

int Bled112Serial::ReadBleHeader(ble_header& api_header)
{
	int retVal{ 0 };
	retVal = m_serial->readBytes((unsigned char*)&api_header, 4);
	for (int i = 0; i < retVal; i++)
	{
		cout << (unsigned char*)&api_header << endl;
	}
	return retVal;
}

int Bled112Serial::ReadBleMessage(ble_header& api_header)
{
	int retVal{ 0 };
	uint32 bytes_read{ 0 };
	const struct ble_msg * api_msg;
	unsigned char data[256];

	if (api_header.lolen > 0)
	{
		bytes_read = m_serial->readBytes(data, api_header.lolen);
	}
	api_msg = ble_get_msg_hdr(api_header);

	if (false == api_msg)
	{
		ofLog(OF_LOG_ERROR, "Message not found : " + ofToString((int)(api_header.cls)) + " : " + ofToString((int)(api_header.command)));
		retVal = -1;
	}
	else
	{
		api_msg->handler(data);
	}
	return retVal;
}

void Bled112Serial::WriteBleMessage(uint8 len1, uint8* data1, uint16 len2, uint8* data2)
{
	if (len1>0)
	{ 
		ofLog(OF_LOG_NOTICE, ofToString(m_serial->writeBytes(data1, len1)) + "bytes written");
	}
	if (len2 > 0)
	{
		ofLog(OF_LOG_NOTICE, ofToString(m_serial->writeBytes(data2, len2)) + "bytes written");
	}
}

