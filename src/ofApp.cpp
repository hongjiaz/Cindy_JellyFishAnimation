#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//At the begining of the program, to define the basic code condition.
    img.loadImage("Sea_1.jpg");
    //To put a picture as a background.
    frames=8;
    //The animation will include 8 pictures.
    for(int i=0;i<frames;i++){
    //The animation start at zero.
        images[i].loadImage("Jellyfish "+ ofToString(i+1)+".png");
        //To load the images.
    }
    framecounter=10;
    //The frames that will be displayed.
    ofSetFrameRate(10);
    //The speed rate of the animation.
    stopAnim=false;
    //To let the animation stop.
    img_1.loadImage("Jellyfish.png");
    //To load the images.

}

//--------------------------------------------------------------
void ofApp::displayAnim(float xpos,float ypos){
//To work on the animation.
    if(!stopAnim){
    //To define the stop Animation.
        framecounter++;
        //The frames that will be displayed.
    }
    framecounter=(framecounter)%frames;
    //The function for the animation.
    images[framecounter].draw(xpos, ypos);
    //The loaction of the animation.

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
//To work on the code.
    img.draw(0,0);
    //To set up the picture's position.
    float targetX=mouseX;
    //The x coordinate of the small jellyfish.
    float targetY=mouseY;
    //The y coordinate of the small jellyfish.
    x+=(targetX-x)*easing;
    //The x coordinate of the small jellyfish.
    y+=(targetY-y)*easing;
    //The y coordinate of the small jellyfish.
    displayAnim(ofGetMouseX(), ofGetMouseY());
    //The position of the animation.
    img_1.draw(ofGetMouseX()+130,ofGetMouseY()+130);
    //The position of the jellyfish.

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
//Keyboard control setup.
    if(key=='s'){
    //To make the 's' key become the saving key.
        ofSaveFrame("Project1_Cindy.png");
        //The name of the saving.
    }
    if(key==OF_KEY_RETURN){
    //To make Return key become the movement control key.
        stopAnim=!stopAnim;
         //To work on the Return key.
    }

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//--------------------------------------------------------------

