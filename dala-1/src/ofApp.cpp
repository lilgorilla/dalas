#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofBackground(0, 0, 0);
    ofSetWindowShape(1280, 720);
    
    
    dotCount = 100;
    
    angle = 0;
    angle2 = 0;
    angleAdder1 = .009;
    angleAdder2 = .016;
    shaper = 1;
    radius   = 1;
    
    amp = 200;
    
    square = 190;
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
    ofColor electricrose(181, 136, 255); ofColor aqua(134,221,240);
    
    ofSetColor(greensea);
    
    dot_position_orig = TWO_PI/dotCount;
    
    interval = TWO_PI/4;
    
    
    interval3 = TWO_PI/6;
    interval4 = TWO_PI/3;
    interval3 = TWO_PI/2;
    
    ofPushMatrix();
    ofTranslate(square, square);
//        for (int g=0; g<400; g++) { // run through each particle location
//            rx = 40+cos((4 * (angle + dot_position_orig * g))) * (amp + sin(angle)*40) ; // r = particle position
//            ry = 40 + sin(((angle + dot_position_orig * g))) * (amp + sin(angle)*40);
//            dot_position_new.x = center.x + rx * sin(angle +  dot_position_orig * g);
//            dot_position_new.y = center.y + ry * cos(angle + dot_position_orig * g);
//            ofCircle(dot_position_new.x, dot_position_new.y, radius);
//        }
    
//        for (int g=0; g<400; g++) { // run through each particle location
//            rx = 40 + cos((4 * (angle + dot_position_orig * g))) * amp + sin(angle)*10 ; // r = particle position
//            ry = 40+ sin(((angle + dot_position_orig * g))) * (amp*sin(angle));
//            dot_position_new.x = center.x + rx * sin(angle +  dot_position_orig * g);
//            dot_position_new.y = center.y + ry * cos(angle + dot_position_orig * g);
//            ofCircle(dot_position_new.y, dot_position_new.x, radius);
//        }
    
    for (int g=0; g<50; g++) { // run through each particle location
        rx = 40 + cos((2 * (angle + dot_position_orig * g))/7) * amp; // r = particle position
        ry = 40+ sin(((angle + dot_position_orig * g))) * amp;
        dot_position_new.x = center.x + rx * sin(angle +  dot_position_orig * g);
        dot_position_new.y = center.y + ry * cos(angle + dot_position_orig * g);
        ofCircle(dot_position_new.y, dot_position_new.x, radius);
        
        rx = 40 + cos((2 * (angle + dot_position_orig * g + TWO_PI/4))/7) * amp; // r = particle position
        ry = 40 + sin(((angle + dot_position_orig * g + TWO_PI/4))) * amp;
        _two.x = center.x + rx * sin(angle +  dot_position_orig * g);
        _two.y = center.y + ry * cos(angle + dot_position_orig * g);
        ofCircle(_two.y, _two.x, radius);
        
        ofLine(dot_position_new.y, dot_position_new.x, _two.y, _two.x);
    }
    
//    for (int g=0; g<50; g++) { // run through each particle location
//        rx = 40 + cos((2 * (angle + dot_position_orig * g + TWO_PI/4))/7) * amp; // r = particle position
//        ry = 40 + sin(((angle + dot_position_orig * g + TWO_PI/4))) * amp;
//        _two.x = center.x + rx * sin(angle +  dot_position_orig * g);
//        _two.y = center.y + ry * cos(angle + dot_position_orig * g);
//        ofCircle(_two.y, _two.x, radius);
//    }
    
//    for (int g=0; g<50; g++) { // run through each particle location
//        rx = 40 + cos((2 * (angle + dot_position_orig * g + 100))/7) * amp; // r = particle position
//        ry = 40 + sin(((angle + dot_position_orig * g + 100))) * amp;
//        dot_position_new.x = center.x + rx * sin(angle +  dot_position_orig * g);
//        dot_position_new.y = center.y + ry * cos(angle + dot_position_orig * g);
//        ofCircle(dot_position_new.y, dot_position_new.x, radius);
//    }
//    
//    for (int g=0; g<50; g++) { // run through each particle location
//        rx = 40 + cos((2 * (angle + dot_position_orig * g + 200))/7) * amp; // r = particle position
//        ry = 40 + sin(((angle + dot_position_orig * g + 200))) * amp;
//        dot_position_new.x = center.x + rx * sin(angle +  dot_position_orig * g);
//        dot_position_new.y = center.y + ry * cos(angle + dot_position_orig * g);
//        ofCircle(dot_position_new.y, dot_position_new.x, radius);
//    }
//    ofPopMatrix();
    
    
    
//    ofPushMatrix();
//        ofTranslate(square,0);
//        for (float l=0; l<TWO_PI; l+=interval2) {
//            for (int g=0; g<600; g++) {
//                r = sin( (2 * ( angle + interval * g + l))/7) * (sin(angle)+amp);
//                _three.x = center.x + r * sin( angle + interval * g );
//                _three.y = center.y + r * cos( angle + interval * g );
//                ofCircle(_three.x, _three.y, radius);
//                
//            }
//        }
//    ofPopMatrix();
//    
//    ofPushMatrix();
//    ofTranslate(square, 0);
//    ofSetColor(255,255,255);
//    for (float l=0; l<TWO_PI; l+=interval2) {
//        for (int g=0; g<600; g++) {
//            r = sin( (5 * ( angle + interval * g + l))/7) * (sin(angle)+amp);
//            _three.x = center.x + r * sin( angle + interval * g );
//            _three.y = center.y + r * cos( angle + interval * g );
//            ofCircle(_three.x, _three.y, radius);
//            
//        }
//    }
//    ofPopMatrix();
    
    
    
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