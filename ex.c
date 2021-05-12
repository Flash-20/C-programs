#include <stdio.h>
#include<stdlib.h>
#include<process.h>
void main(){
    FILE *fp;
    char ch;
    int charcount=0, whitecount=0, linecount=0, tabcount=0;
    fp=fopen("abc.txt", "r");
    if(fp!=NULL){
        printf("File not found");
        exit(0);
    }
    while(fp!=EOF){
        ch=fgetc(fp);
        charcount++;
        if(ch==' ')
            whitecount++;
        if(ch=='\n')
            linecount++;
        if(ch=='\t')
            tabcount++;
    }
    fclose(fp);
    printf("Total number of chars are %d\n", charcount);
    printf("Total number of whites are %d\n", whitecount);
    printf("Total number of new lines are %d\n", linecount);
    printf("Total number of tabs are %d\n", tabcount);
}