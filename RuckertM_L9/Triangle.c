//
// Created by mwruc on 11/19/2019.
//

#include "Shape.h"
#include "Triangle.h"
#include <stdlib.h>

Shape* New_Triangle(double s1, double s2, double s3, double h){
    Shape* pObj = New_Shape();

    Triangle* pTriObj = (Triangle*)malloc(sizeof(Triangle));
    pObj->derivedObj = pTriObj;
    pTriObj->pBaseObj = pObj;

    pTriObj->s1 = s1;
    pTriObj->s2 = s2;
    pTriObj->s3 = s3;
    pTriObj->h = h;

    pTriObj->triArea = malloc(sizeof(double));
    pTriObj->triPerim = malloc(sizeof(double));

    //pTriObj->triArea = tArea;
    //pTriObj->triPerim = tPerimeter;
    pObj->area = tArea;
    pObj->perimeter = tPerimeter;

    return pTriObj->pBaseObj;
}

double tArea(Shape* shape){
    return ((Triangle*)shape->derivedObj)->s1 * ((Triangle*)shape->derivedObj)->h * 0.5;
}

double tPerimeter(Shape* shape){
    return ((Triangle*)shape->derivedObj)->s1 + ((Triangle*)shape->derivedObj)->s2 + ((Triangle*)shape->derivedObj)->s3;
}

