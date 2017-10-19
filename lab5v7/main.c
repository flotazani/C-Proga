#include <stdio.h>

int main() {
        int arr[7];
        arr[0] = 90;
        arr[1] = 76;
        arr[2] = 54;
        arr[3] = 23;
        arr[4] = 56;
        arr[5] = 12;
        arr[6] = 48;


        for (int i = 0; i < 7; i++) {
           printf("%5d",i+1);
           printf(" ");
        }
       printf("\n");
        for (int i = 0; i < 7; i++) {
            printf("%5d",arr[i]);
            printf(" ");
        }

         printf("\n");
        int arrA[2][2] = { {2,5},
                           {2,2} };
        int arrB[2][2] = { {1,2},
                           {0,1} };
        int arrC[2][2]= { { 0,0 },
                          { 0,0 } };

        arrC[0][0] = arrA[0][0] * arrB[0][0] + arrA[0][1] * arrB[1][0];
        arrC[0][1] = arrA[0][0] * arrB[0][1] + arrA[0][1] * arrB[1][1];
        arrC[1][0] = arrA[1][0] * arrB[0][0] + arrA[1][0] * arrB[1][0];
        arrC[1][1] = arrA[1][0] * arrB[0][1] + arrA[1][0] * arrB[1][1];
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++) {
//cout.setf(ios::left);
//cout.width(3);
                printf("%5d",arrC[i][j]);
                printf(" ");

            }
            printf("\n");
        }

        return 0;
    }
