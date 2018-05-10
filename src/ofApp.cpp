#include "ofApp.h"
#include "ofMesh.h"

int xPosI, yPosI, zPosI, innerRad = 100;
int xPosO, yPosO, zPosO, outerRad = 150;
int rotation = 0;
float zPos = 0.0;

//--------------------------------------------------------------
ofApp::~ofApp()
{
    upperRing.clear();
    lowerRing.clear();
    sideRing.clear();
}

//--------------------------------------------------------------
void ofApp::setup()
{
    for (int theta = 0; theta < 720; theta ++)
    {
        xPosI = innerRad * cos(theta);
        yPosI = innerRad * sin(theta);
        zPosI = 0.0;

        xPosO = innerRad * cos(theta);
        yPosO = innerRad * sin(theta);
        zPosO = 50.0;
        
        p.set(xPosI, yPosI, zPosI);
        ring.addVertex(p);
        
        p.set(xPosO, yPosO, zPosO);
        ring.addVertex(p);

        xPosO = outerRad * cos(theta);
        yPosO = outerRad * sin(theta);
        zPosO = 50.0;
        
        xPosI = outerRad * cos(theta);
        yPosI = outerRad * sin(theta);
        zPosI = 0.0;
        
        p.set(xPosI, yPosI, zPosI);
        ring.addVertex(p);
        
        p.set(xPosO, yPosO, zPosO);
        ring.addVertex(p);
        
        ring.setupIndicesAuto();
        
        ofEnableDepthTest();
    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    rotation +=1;
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateY(rotation);
    
    ring.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    ring.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
