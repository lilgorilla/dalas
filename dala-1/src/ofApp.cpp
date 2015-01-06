#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofBackground(0, 0, 0);
    ofSetWindowShape(900, 700);
    
    angle = 0;
    angleAdder = .001;
    radius = 1;
    
    square = 100;
    amp = square/2-10;
    center.set(square/2, square/2);

    dot_count = 100;
    dot_spacing = TWO_PI/dot_count;
}

//--------------------------------------------------------------
void ofApp::update(){
    angle += angleAdder;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableAlphaBlending();
    ofColor greensea(112,252,214);
    ofColor electricrose(181, 136, 255); ofColor aqua(134,221,240);
    
    ofSetColor(greensea);
    
    for( int i=0; i<7; i++){
        ofPushMatrix();
        ofTranslate(0, square*i);
        for (int g=0; g<dot_count; g++) {
            r = cos(((i+1) * (angle + dot_spacing * g))) * amp;
            dot_position.x = center.x + r * sin(angle +  dot_spacing * g);
            dot_position.y = center.y + r * cos(angle + dot_spacing * g);
            ofCircle(dot_position.x, dot_position.y, radius);
        }
        ofPopMatrix();
    }
    
    ofPushMatrix();
    ofTranslate(square, 0);
    for (int g=0; g<dot_count; g++) {
        r = cos((1 * (angle + dot_spacing * g)/5)) * amp;
        dot_position.x = center.x + r * sin(angle +  dot_spacing * g);
        dot_position.y = center.y + r * cos(angle + dot_spacing * g);
        ofCircle(dot_position.x, dot_position.y, radius);
    }
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(square, square);
    for (int g=0; g<600; g++) {
        r = cos((1 * (angle + dot_spacing * g))/6) * amp;
        dot_position.x = center.x + r * sin(angle +  dot_spacing * g);
        dot_position.y = center.y + r * cos(angle + dot_spacing * g);
        ofCircle(dot_position.x, dot_position.y, radius);
    }
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(square, square*2);
    for (int g=0; g<700; g++) {
        r = cos((1 * (angle + dot_spacing * g))/7) * amp;
        dot_position.x = center.x + r * sin(angle +  dot_spacing * g);
        dot_position.y = center.y + r * cos(angle + dot_spacing * g);
        ofCircle(dot_position.x, dot_position.y, radius);
    }
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(square, square*3);
    for (int g=0; g<800; g++) {
        r = cos((1 * (angle + dot_spacing * g))/8) * amp;
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