#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *f;
    char ch;
    int charcount=0, whitecount=0, linecount=0, tabcount=0;
    f=fopen("abc.txt", "r");
    if(f==NULL){
        printf("File not found");
        exit(0);
    }
    while((ch=fgetc(f))!=EOF){
        charcount++;
        if (ch==' ')
            whitecount++;
        if(ch=='\n')
            linecount++;
        if(ch=='\t')
            tabcount++;
    }
    fclose(f);
    printf("Nmuber of chars is %d\n", charcount);
    printf("Nmuber of whites is %d\n", whitecount);
    printf("Nmuber of lines is %d\n", linecount);
    printf("Nmuber of tabs is %d\n", tabcount);
}