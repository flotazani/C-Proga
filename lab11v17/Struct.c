//
// Created by Andrei Konovalov on 12/8/17.
//
#include <stdio.h>
#include "Point.h"
#include "Struct.h"
#include "math.h"
double Per(struct Pentagon* P) {
    double arr[sizeof(P->p)/8], perim = 0;

    for (int i = 0; i < sizeof(P->p)/8 - 1; i++) {
        if (i < sizeof(P->p) - 1) {
            arr[i] = sqrt(pow(P->p[i + 1].x - P->p[i].x, 2) + pow(P->p[i + 1].y - P->p[i].y, 2));
        } else {
            arr[i] = sqrt(pow(P->p[0].x - P->p[i].x, 2) + pow(P->p[0].y - P->p[i].y, 2));
        }
    }
    for (int i = 0; i < sizeof(arr); i++) {
        perim += arr[i];
    }
    return perim;
}

void Constructor(struct Pentagon* P){
    int a;
    printf("Now enter five x,y couples of coordinates\n");
    for (int i = 0;i <sizeof(P->p)/8;i++){
        scanf("%d",&a);
        P->p[i].x = a;
        scanf("%d",&a);
        P->p[i].y = a;
    }
}