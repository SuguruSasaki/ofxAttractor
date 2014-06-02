//
//  Node.h
//  mySketch_attractor
//
//  Created by SuguruSasaki on 2014/06/03.
//
//

#ifndef __mySketch_attractor__Node__
#define __mySketch_attractor__Node__

#include <iostream>
#include "ofVec2f.h"

class Node
{
public:
    ofVec2f position;
    ofVec2f velocity;
    float minX;
    float minY;
    float maxX;
    float maxY;
    float damping;
    
    // Constractor
    Node(float x=0, float y=0);
    
    // update
    void update();
};


#endif /* defined(__mySketch_attractor__Node__) */
