#include <stdio.h>

int main() {
    int a = 0,b = 0,c = 0;
    scanf("%o",&a);
    printf("%d\n",a);
    printf("%o\n", a >> 3);
    scanf("%o",&b);
    c = a|b;
    printf("%o",c);
    return 0;
}