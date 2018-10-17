#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp;
    fp = fopen("../demo.txt","w+");
    fprintf(fp,"hi, i am luyen\n");
    fseek(fp,9,SEEK_SET);
    fprintf(fp,"xuan hung\n");
    fclose(fp);
    return 0;
}