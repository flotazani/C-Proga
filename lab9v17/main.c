#include <stdio.h>
#include <math.h>
int PrimeNumber(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }

        if ((i == number) || (i > sqrt(number))) {
            return 1;
        }
    }
}

int main() {
 int lng, abo, ext,fin,n;
    printf("enter talk lelngth, payment, extra minute price\n");
    scanf("%d", &lng);
    scanf("%d", &abo);


    scanf("%d", &ext);
    if(ext < abo/499){
        printf("%d extra minute must be larger than", abo/499);
        scanf("%d", &ext);
    }

    if(lng>499){
        fin = (lng-499)*ext+abo;
    }
    else
        fin = abo;
    printf("%d", fin);


    scanf("%d", &n);
    for(int i=2; i < n; i++){
        if(PrimeNumber(i)==1){
              printf("%d\n", i);
         }
    }
    return 0;
}