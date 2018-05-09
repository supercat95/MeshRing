#pragma once

#include "ofMain.h"
#include <list>
#include <vector>

using std::list;
using std::vector;

class ofApp : public ofBaseApp{
    
    ofMesh ring;
    
    ofPoint p, p1, p2, p3;
    list<ofPoint> points;
    vector<ofVec3f> vectors;
    
//    vector<int> r, g, b, degree, x, y, z;
    
	public:
        ~ofApp();
    
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
