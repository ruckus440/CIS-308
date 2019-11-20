//
// Created by mwruc on 11/19/2019.
//

#include "Shape.h"
#include "Square.h"
#include <stdlib.h>

Shape* New_Square(double len){
    Shape* pObj = New_Shape();

    Square* pSqObj = (Square*)malloc(sizeof(Square));
    pObj->derivedObj = pSqObj;
    pSqObj->pBaseObj = pObj;

    pSqObj->len = len;

    pSqObj->sqArea = malloc(sizeof(double)*4);
    pSqObj->sqPerim = malloc(sizeof(double));

    //pSqObj->sqArea = Area;
    //pSqObj->sqPerim = Perimeter;
    pObj->area = Area;
    pObj->perimeter = Perimeter;

    return pSqObj->pBaseObj;
}

double Area(Shape* shape){
    return ((Square*)shape->derivedObj)->len * ((Square*)shape->derivedObj)->len;
}

double Perimeter(Shape* shape){
    return ((Square*)shape->derivedObj)->len * 4;
}