#include <stdio.h>
#include "Struct.h"
#include "Point.h"
int main() {
    double a=0;
    struct Pentagon Pent;
    Constructor(&Pent);
    a = Per(&Pent);
    printf("This is your pertim: %f ", a);

    return 0;
}