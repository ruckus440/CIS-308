//
// Created by mwruc on 11/19/2019.
//

#ifndef RUCKERTM_L9_TRIANGLE_H
#define RUCKERTM_L9_TRIANGLE_H

typedef struct _Triangle Triangle;
typedef double (*fptrTriArea) (Shape*);
typedef int (*fptrTriPerimeter) (Shape*);

typedef struct _Triangle {
    Shape* pBaseObj;
    double s1, s2, s3, h;
    fptrTriArea  triArea;
    fptrTriPerimeter triPerim;

}Triangle;

Shape* New_Triangle(double side1, double side2, double side3, double height);

double tArea(Shape*);
double tPerimeter(Shape*);


#endif //RUCKERTM_L9_TRIANGLE_H
