//
// Created by mwruc on 11/19/2019.
//


//
//  Shape.c
//  Polymorphism
//
//  Created by Jorge Valenzuela on 4/20/18.
//  Copyright © 2018 Jorge Valenzuela. All rights reserved.
//
#include <stdlib.h>
#include "Shape.h"
Shape* New_Shape() {
    Shape* sh = NULL;
    sh = (Shape*)malloc(sizeof(Shape));
    sh->area = NULL;
    sh->perimeter = NULL;
    sh->derivedObj = NULL;
    return sh;
}
