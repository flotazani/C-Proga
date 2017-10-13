#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    if((a>23) && (a<32)){
        printf("%s", "in range\n");}
    else{
        printf("%s", "out of range\n");
    }
    scanf("%d", &a);
    a = a>>1;
    printf("%d",a);
    printf("%s", "\n");

    a = a<<6;
    printf("%d",a);
    printf("%s", "\n");

    if(a>0){
        printf("%d",a);
        printf("%s", "\n");

        printf("%s","7th bit is 1");
    }
    else{
        printf("%s","7th bit is 0");
    }
    return 0;
}