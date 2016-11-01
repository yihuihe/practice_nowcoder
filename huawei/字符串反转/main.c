#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[1024];
    int length,i=0;

    while(scanf("%s",str)!=EOF)
    {
         length = strlen(str);
         for(i=length-1;i>=0;i--)
         printf("%c",str[i]);
         printf("\n");
    }

    //printf("\n");
    //printf("Hello world!\n");
    return 0;
}
