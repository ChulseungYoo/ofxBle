#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetLogLevel(OF_LOG_VERBOSE);
	bleThread.startThread();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::exit(){
	bleThread.waitForThread(true);
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if ('s' == key)
	{
		bleThread.StartScan();
	}
	else if ('S' == key)
	{
		bleThread.StopScan();
	}
	else if ('c' == key)
	{
		bleThread.Connect();
	}
	else if ('d' == key)
	{
		bleThread.Disconnect();
	}
	else if ('w' == key)
	{
		bleThread.RawTx();
	}
	else if ('r' == key)
	{
		bleThread.GATTReadClient();
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
