#include "ofApp.h"
#include "ofMesh.h"

int xPos, yPos, innerRad = 100, outerRad = 150, rotation = 0;
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
        if (theta %2==0)
        {
            xPos = innerRad * cos(theta);
            yPos = innerRad * sin(theta);
        } else
        {
            xPos = outerRad * cos(theta);
            yPos = outerRad * sin(theta);
        }
        
        p.set(xPos, yPos, zPos);
        
        upperRing.addVertex(p);
        upperRing.setupIndicesAuto();
    
        ofEnableDepthTest();
    }
    
    for (int theta = 0; theta < 720; theta ++)
    {
        zPos = 50.0;
        if (theta %2==0)
        {
            xPos = innerRad * cos(theta);
            yPos = innerRad * sin(theta);
        } else
        {
            xPos = outerRad * cos(theta);
            yPos = outerRad * sin(theta);
        }
        
        p.set(xPos, yPos, zPos);
        
        lowerRing.addVertex(p);
        lowerRing.setupIndicesAuto();
        
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
    
    upperRing.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    upperRing.draw();
    
    lowerRing.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    lowerRing.draw();
    
//    sideRing.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
//    sideRing.draw();
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
