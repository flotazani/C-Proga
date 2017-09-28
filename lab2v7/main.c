#include <stdio.h>
#include <math.h>
int main() {

    double a = 0;
    double b = 0;
    double c = 0;
   printf("%s","pleace eneter the argument: \n");
    scanf("%lf",&a);
   // printf("%lf",a);
    b = (pow(cos(((double)3 / 8)* M_PI - (double)a / 4), 2) - pow(cos(((double)11 / 8)* M_PI + (double)a / 4), 2));
    printf("%lf",b);
    printf("%s","\n Second formula is equal to: ");
    c = ((double)(sqrt(2.0))/2) * sin((double)a/2);
    printf("%lf",c);
    return 0;
}