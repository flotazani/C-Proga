//
// Created by Andrei Konovalov on 12/30/17.
//
#include "point.h"
#ifndef AAAAAAAAAAA_TRIANGLE_H
#define AAAAAAAAAAA_TRIANGLE_H
struct Triangle{
    struct Point P[3];
};

void Consturctor( struct Triangle *T);

double Perimetr( struct Triangle *T);
double Area( struct Triangle *T);
#endif //AAAAAAAAAAA_TRIANGLE_H
