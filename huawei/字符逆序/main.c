#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[1024];
    int length = 0,i;

    gets(s);
    length = strlen(s);
    for(i=length-1; i>=0;i--)
    printf("%c",s[i]);
    printf("\n");
    return 0;
}
