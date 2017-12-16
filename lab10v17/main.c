#include <stdio.h>
#include "math.h"
#include <stdlib.h>
struct point{
      double x, y;
  };

double distance(const struct point a, const struct point b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}



int f(int a)
{
    if(!a)
        return 0;
    return (a % 10) + f(a / 10);
}


int main(){

    int n, count = 0;
    struct point *p;
    printf("Enter array size\n");
    scanf("%d",&n);

    p = malloc(n*sizeof(struct point));
    srand(10);
    for (int i = 0; i < n; i++)
    {
        p[i].x = -10.5 + rand() % 11;
        p[i].y = -10.5 + rand() % 11;
    }

    double **array;
    array = malloc(n * sizeof(double *));
    for(int i = 0; i < n; i++)
    {
        array[i] = malloc((n-1) * sizeof(double));
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n-1; j++)
           if(i == j){
               for (int l = j+1; l < n; l++)
                 array[i][l-1] = distance(p[i], p[l]);
               j= n-1;
           }else if(i>j){
               array[i][j] = distance(p[i], p[j]);
           }


    for (int i = 0; i <  n; i++){
        for (int j = 0; j < n-1; j++){
            printf("%lf ", array[i][j]);}
        printf("\n");
    }

    //Free each sub-array
    for(int i = 0; i < n; ++i) {
        free(array[i]);
    }
    free(array);
    free(p);


    printf("Enter array size\n");
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}
