#include "ofApp.h"
#include "Node.h"
#include "Attractor.h"

std::vector<Node> nodes;
static const int NODE_MAX = 100;

const int xCount = 200;
const int yCount = 200;
const int gridSize = 500;

Attractor attractor(0, 0);

void ofApp::initGrid()
{
    for(int y = 0; y < yCount; ++y)
    {
        for(int x = 0; x < xCount; ++x)
        {
            float xPos = x * (gridSize/(xCount-1) ) + (ofGetWidth()-gridSize) / 2;
            float yPos = y * (gridSize/(yCount-1) ) + (ofGetHeight()-gridSize) / 2;
            
           // std::cout << yPos << std::endl;

            Node node = Node(xPos, yPos);
            node.minX = 0;
            node.minY = 0;
            node.maxX = ofGetWidth();
            node.maxY = ofGetHeight();
            node.damping = 0.02;

            nodes.push_back(node);
        }
    }
}


//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetBackgroundColor(0, 0, 0);
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    
    attractor.radius = 200;
    
    // Node Gridを作成
    initGrid();
}

//--------------------------------------------------------------
void ofApp::update()
{
    attractor.x = mouseX;
    attractor.y = mouseY;
    
    std::vector<Node>::iterator it = nodes.begin();
    while(it != nodes.end())
    {
        attractor.attract(*it);
        it->update();
        ++it;
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofNoFill();
    ofSetColor(255, 0, 0);
    
    std::vector<Node>::iterator it = nodes.begin();
    while (it != nodes.end())
    {
        ofCircle(it->position.x, it->position.y, 1);
        ++it;
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
