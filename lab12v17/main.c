#include <stdio.h>
#include "stdlib.h"
#include "string.h"

int main() {
    FILE *DatabaseRoot;
    int lines_count=0;
    char str[50];

    char *estr;
    DatabaseRoot = fopen("/Users/andreikonovalov/Documents/ITMO/lab12v17/Root.txt", "r");
    if (DatabaseRoot != NULL) {
        while (!feof(DatabaseRoot)){                                    // считаем колличество строк в файле
            lines_count++;
            estr = fgets (str,sizeof(str),DatabaseRoot);
            if(lines_count%2==0){
                printf("%s\n",estr);
            }
        }
    fclose(DatabaseRoot);
    }

    return 0;
}