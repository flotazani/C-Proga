//
// Created by Andrei Konovalov on 12/1/17.
//

#ifndef LAB11V17_STRUCT_H
#define LAB11V17_STRUCT_H
#include "Point.h"
struct Pentagon{
    struct point p[5];
};
double Per(struct Pentagon* P);
void Constructor(struct Pentagon* P);
#endif //LAB11V17_STRUCT_H
