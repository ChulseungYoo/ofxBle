#ifndef BLED112_SERIAL_H_
#define	BLED112_SERIAL_H_

#include "ofMain.h"
#include "ofxBle\libs\ble112\src\apitypes.h"
#include "ofxBle\libs\ble112\src\cmd_def.h"

class Bled112Serial{
public:
	static void InitSerial(string port, uint32 baud_rate);
	static void WriteBleMessage(uint8 len1, uint8* data1, uint16 len2, uint8* data2);
	static int ReadBleHeader(ble_header& api_header);
	static int ReadBleMessage(ble_header& ap_header);
private:
	static ofSerial * m_serial;
};

#endif // ! BLED112_SERIAL_H_
