//
//  Node.cpp
//  mySketch_attractor
//
//  Created by SuguruSasaki on 2014/06/03.
//
//

#include "Node.h"

// Constractor
// @param   x   position x
// @param   y   position y
Node::Node(float x, float y)
{
    position.x = x;
    position.y = y;
    minX = 0;
    minY = 0;
    maxX = 0;
    maxY = 0;
    damping = 0.1;
    velocity.x = 0;
    velocity.y = 0;
}

// update :
//
//
void Node::update()
{
    position.x += velocity.x;
    position.y += velocity.y;
    
    if(position.x < minX)
    {
        position.x = minX - (position.x - minX);
        velocity.x = -velocity.x;
    }
    
    if(position.x > maxX)
    {
        position.x = maxX - (position.x - maxX);
        velocity.x = -velocity.x;
    }
    
    if(position.y < minY)
    {
        position.y = minY - (position.y - minY);
        velocity.y = -velocity.y;
    }
    
    if(position.y > maxY)
    {
        position.y = maxY - (position.y - maxY);
        velocity.y = -velocity.y;
    }
    
    velocity.x *= (1-damping);
    velocity.y *= (1-damping);
}



