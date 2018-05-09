#include "ofApp.h"
#include "ofMesh.h"

int xPos = 1, yPos = 0, yPos2 = 60, zPos = 1, theta = 10, loop = 36, radius = 300;
ofVec3f v1, v2, v3;

//--------------------------------------------------------------
ofApp::~ofApp()
{
    ring.clear();
}

//--------------------------------------------------------------
void ofApp::setup()
{
    
    for (int i = 0; i < loop; i++)
    {
        v1.set(xPos, yPos, zPos); v2.set(xPos + 30, yPos2, zPos); v3.set(xPos + 60, yPos, zPos); // left, up, down

//        vectors.push_back(v1); vectors.push_back(v2); vectors.push_back(v3);

        ring.addVertex(v1); ring.addVertex(v2); ring.addVertex(v3);
        ring.setupIndicesAuto();

        ofEnableDepthTest();

        xPos += 30;
        zPos += 30;
    }
    
    
    // sets x, y, and z coordinates of points
//    for (int i = 0; i < loop; i++)
//    {
////        xPos*=-1;
//        yPos2*=-1;
////        zPos*=-1;
//
//        p.set(xPos, yPos2, zPos);
//
//        p.normalize(); // centers points into a ring
//        p *= radius;
//        points.push_back(p);
//
//        vectors.push_back(p);
//
//        ring.addVertex(vectors[i]); ring.addVertex(vectors[i+1]); ring.addVertex(vectors[i+2]);
//
//        ofEnableDepthTest(); // Adds depth to look more 3D
//    }
    
//    for (int i = 0; i < loop; i++)
//    {
//        degree.push_back(ofRandom(0,10)), x.push_back(ofRandom(0,10)), y.push_back(ofRandom(0,10)), z.push_back(ofRandom(0,10));
//    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    theta += 1;
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateY(theta);
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
