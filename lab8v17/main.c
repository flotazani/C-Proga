#include <stdio.h>
#include <string.h>
int main() {

   int a,i = 0,count=0;
    char *str1 = "hello bob",str2[]  = "world jon",ch, *ach, sep, *tempstr = NULL, *finstr, srt3[10]="o";

    if (strcmp (str1, str2)==0)
        printf("same\n");
    else
         printf("diff\n");


    scanf("%d",&a);
    if (strncmp (str1, str2,a)==0)
        printf("same\n");
    else
        printf("diff\n");

    printf("%d\n", strlen(str1));



    while (i < strlen(str1)){

        ch = str1[i];
        ach = strchr(str2,ch);
        if(ach != NULL){
            count = count + 1;
        }
       i= i+1;
       ach = NULL;
    }
    printf("%d\n", count);



    tempstr = strtok(str2,srt3);
       while(tempstr != NULL){
         printf("%s\n", tempstr);
         tempstr = strtok(NULL,srt3);
       }


    char stra[20] = "ALALALAUUUUU!";
    char strb[10] = "OLOLOLGH";
    scanf("%d",&a);
    strncpy(stra,strb,a);
    printf("%s\n", stra);
    return 0;
}