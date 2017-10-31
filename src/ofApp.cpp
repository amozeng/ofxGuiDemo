#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(radius.setup("radius", 140, 10, 300));
    
    
    gui.add(x.setup("x", ofGetWidth()/2, 0, ofGetWidth()));
    gui.add(y.setup("y", ofGetHeight()/2, 0, ofGetHeight()));

    gui.add(center.setup("center",
                         ofVec2f(ofGetWidth()*.5, ofGetHeight()*.5),
                         ofVec2f(0, 0),
                         ofVec2f(ofGetWidth(), ofGetHeight())));
    gui.add(color.setup("color",
                        ofColor(100, 100, 140),
                        ofColor(5, 10),
                        ofColor(255, 255)));
    gui.add(filled.setup("fill", true));
    gui.add(circleResolution.setup("circle res", 5, 3, 90));
    
    
    
    gui.add(numCircles.setup("number of circles", 1, 1, 10));
    gui.add(disBtwCir.setup("disBtwCir", 30, 10, 100));



}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetCircleResolution(circleResolution);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if(filled){
        ofFill();
    }else{
        ofNoFill();
    }
    
    ofSetColor(color);
    
    for(int i = 0 ; i < numCircles; i ++){
        //ofDrawCircle(center, radius);
        ofDrawCircle(x + i * disBtwCir, y, radius);
    }
    
    

    gui.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

