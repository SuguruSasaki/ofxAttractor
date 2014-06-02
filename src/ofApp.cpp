#include "ofApp.h"
#include "Node.h"

std::vector<Node> nodes;
static const int NODE_MAX = 100;

const int xCount = 200;
const int yCount = 200;


//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetBackgroundColor(0, 0, 0);
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    
    for( int i = 0; i < 100; ++i)
    {
        float x = ofRandom(5, ofGetWidth()-5);
        float y = ofRandom(5, ofGetHeight()-5);
        Node node(x, y);
        node.minX = 5;
        node.minY = 5;
        node.maxX = ofGetWidth()-5;
        node.maxY = ofGetHeight()-5;
        node.velocity.x = ofRandom(-3, 3);
        node.velocity.y = ofRandom(-3, 3);
        node.damping = 0.01;
        
        nodes.push_back(node);
    }
    
    std::cout << pow(2, 0.5) << std::endl;

}

//--------------------------------------------------------------
void ofApp::update()
{
    for(int i = 0; i < NODE_MAX; ++i)
    {
        nodes[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofNoFill();
    ofSetColor(255, 0, 0);
    
    for(int i = 0; i < NODE_MAX; ++i)
    {
        ofCircle(nodes[i].position.x, nodes[i].position.y, 5);
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
