//
// Created by mwruc on 11/19/2019.
//

#ifndef RUCKERTM_L9_SQUARE_H
#define RUCKERTM_L9_SQUARE_H

typedef struct _Square Square;
typedef double (*fptrSquareArea) (Shape*);
typedef int (*fptrSquarePerimeter) (Shape*);

typedef struct _Square {
    Shape* pBaseObj;
    double len;
    fptrSquareArea sqArea;
    fptrSquarePerimeter sqPerim;
}Square;

Shape* New_Square(double length);

double Area(Shape*);
double Perimeter(Shape*);

#endif //RUCKERTM_L9_SQUARE_H
