#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    void displayAnim(float xpos,float ypos);
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    int frames,framecounter,loops;
    //Statement variable 'frames','framecounter','loops' of type int.
    bool stopAnim;
    //Statement variable 'stopThief' of type boolean. Distribute the meaning that stop of the animation.
    ofImage img,img_1;
    //Statement variable 'img' and 'img_1' of type PImage. Distribute the meaning that they will load into the project.
    ofImage images [8];
    //Statement variable 'images' of type PImage[]. Distribute it will make many pictures into one animation.
    float xpos,ypos,x=0.0,y=0.0;
    //Statement varibable 'xpos','ypos','x' and 'y' of type float. Distribute them the value are 0.
    float easing=0.1;
    //Statement variable 'easing' of type float. Distribute it the value 0.08.
		
};
