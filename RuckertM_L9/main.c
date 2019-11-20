//
//  main.c
//  Polymorphism
//
//  Created by Jorge Valenzuela on 4/20/18.
//  Copyright © 2018 Jorge Valenzuela. All rights reserved.
//
#include <stdio.h>
#include "Shape.h"
#include "Square.h"
#include "Triangle.h"
int main(int argc, const char * argv[]) {
    double area = 0.0;
    double perim = 0.0;
    Shape* mySquare = New_Square(3);
    Shape* myTriangle = New_Triangle(3, 4, 5, 2);
    area= mySquare->area(mySquare);
    printf("The area of the Square is: %f\n", area);
    perim= mySquare->perimeter(mySquare);
    printf("The perimeter of the Square is: %f\n", perim);
    area= myTriangle->area(myTriangle);
    printf("The area of the Triangle is: %f\n", area);
    perim= myTriangle->perimeter(myTriangle);
    printf("The perimeter of the Triangle is: %f\n", perim);
    return 0;
}
