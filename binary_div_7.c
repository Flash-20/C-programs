#include <stdio.h>
#include <string.h>
int main()
{
    char binary[20];
    int i, length;
    gets(binary);
    length = strlen(binary);
    for(i=0; binary[i]!='/0'; i++){
        printf("%s", binary[i]);
    }
    return 0;
}