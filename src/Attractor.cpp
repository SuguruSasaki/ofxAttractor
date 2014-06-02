//
//  Attractor.cpp
//  mySketch_attractor
//
//  Created by SuguruSasaki on 2014/06/03.
//
//

#include "Attractor.h"
#include <math.h>

//
//
//
void Attractor::attract(Node &node)
{
    float dx = (x - node.position.x);
    float dy = (y - node.position.y);
    
    float dist = sqrt(dx * dx + dy * dy);
    
   

    
    if( dist > 0 && dist < radius)
    {
        float s = dist/radius;
        float f = 1 / pow(s, 0.5f)- 1;
        f = f/radius;
        
        node.velocity.x += dx * f;
        node.velocity.y += dy * f;
    }
}