#include <stdio.h>

int main() {

    double *a;
    a = (double *) malloc(4 * sizeof(double));
    for (int i=0;i<=3;i++){
        a[i]=1+i;
    }
    for(int i=1; i <= 4; i++) {
        printf("%d",a[i]);
        printf("\n");}
    free(a);
    return 0;
}