#include<stdio.h>
#include<string.h>
char str[200], temp[30];
/*void checkvalid(char temp[30])
{
    int i, flag1= 0, flag2= 0, flag3= 0, flag4=0;
    if(strlen(temp)>=6 && strlen(temp)<=15)
    {
        for(i=0; temp[i]!='\0'; i++)
        {
            if(temp[i]>='a' && temp[i]<='z')
                flag1= 1;
            if(temp[i]>='A' && temp[i]<='Z')
                flag2= 1;
            if(temp[i]>='0' && temp[i]<='9')
                flag3= 1;
            if(temp[i]=='$' || temp[i]=='#' || temp[i]=='@' || temp[i]=='*' || temp[i]=='!')
                flag4= 1;    
        }
        if(flag1==1 && flag2==1 && flag3==1 && flag4==1)
        {
            printf("%s,", temp);
        }
    }
}*/
void main()
{
    char str[100], temp[100];
    for(int i=0; str[i]!='\0'; i++)
    {
        temp[i] = str[i];
    }
    puts(temp);
}