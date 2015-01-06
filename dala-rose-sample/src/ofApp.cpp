#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofBackground(0, 0, 0);
    ofSetWindowShape(900, 700);
    
    
    dotCount = 200;
    
    angle = 0;
    angle2 = 0;
    angleAdder1 = .009;
    angleAdder2 = .016;
    shaper = 1;
    radius   = 1;
    
    amp = 200;
    
    square = 100;
    amp = square/2;
    
    center.set(square/2, square/2);
    ofColor greensea(112,252,214);
    ofColor bubblegum(238,166,249); ofColor aqua(134,221,240);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    angle += angleAdder1;
    angle2 += angleAdder2;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableAlphaBlending();
    ofColor greensea(112,252,214);
    ofColor electricrose(181, 136, 255);
    ofColor aqua(134,221,240);
    
    ofSetColor(greensea);
    
    dot_spacing = TWO_PI/dotCount;
    interval = TWO_PI/4;
    
    ofPushMatrix();
    
        for (int g=0; g<dotCount; g+=dot_spacing) { // run through each particle location
            r = cos((2 * (angle + dot_spacing * g))/7) * amp; // r = particle position
            dot_position.x = center.x + r * sin(angle +  dot_spacing * g);
            dot_position.y = center.y + r * cos(angle + dot_spacing * g);
            ofCircle(dot_position.x, dot_position.y, radius);
        }
    ofPopMatrix();
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}