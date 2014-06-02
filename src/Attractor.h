//
//  Attractor.h
//  mySketch_attractor
//
//  Created by SuguruSasaki on 2014/06/03.
//
//

#ifndef __mySketch_attractor__Attractor__
#define __mySketch_attractor__Attractor__

#include <iostream>
#include "ofVec2f.h"
#include "Node.h"

class Attractor
{
public:
    float x;
    float y;
    float radius;   // 半径
    
    // Constractor
    Attractor(float theX, float theY): x(theX), y(theY){};
    
    //
    void attract(Node &node);
    
};

#endif /* defined(__mySketch_attractor__Attractor__) */
