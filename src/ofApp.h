#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

    
    ofxPanel gui;
    ofxFloatSlider radius;
    ofxFloatSlider x,y;
    ofxVec2Slider center;
    
    ofxColorSlider color;
    ofxToggle filled;
    ofxIntSlider circleResolution;
    
    
    ofxIntSlider numCircles;
    ofxIntSlider disBtwCir;



    
		
};
