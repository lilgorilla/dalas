#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        float dot_position_orig;
        ofPoint dot_position_new;
        int dotCount;
    
        int square, shaper;
        float rx, ry, interval3;
        float pct, interval, interval2, interval4, angle, angle2, angleAdder1, angleAdder2, rotation, radius;
        float r, q, l, m, amp;
    ofPoint _one, _two, _three, _four;
        float co[3], row[3];
        ofPoint center;
    };
