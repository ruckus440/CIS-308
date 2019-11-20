//
// Created by mwruc on 11/19/2019.
//

#ifndef RUCKERTM_L9_SHAPE_H
#define RUCKERTM_L9_SHAPE_H

//  Shape.h
//  Polymorphism
//
//  Created by Jorge Valenzuela on 4/20/18.
//  Copyright © 2018 Jorge Valenzuela. All rights reserved.
//

#include <stdio.h>
typedef struct _shape Shape;
//declaration of pointers to functions
typedef double    (*fptrCalcArea)(Shape*);
typedef double    (*fptrCalcPerimeter)(Shape*);
typedef struct _shape {
    void* derivedObj;
    fptrCalcArea  area;
    fptrCalcPerimeter perimeter;
} Shape;
Shape* New_Shape(void);


#endif //RUCKERTM_L9_SHAPE_H

