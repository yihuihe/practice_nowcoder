#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[1000];
    char test;
    int length=0,i,count=0;

    while(1)
    {
        gets(s);
        scanf("%c",&test);

        length = strlen(s);
        for(i=0;i<length;i++)
        {
            if(s[i]==test || s[i]-32 == test || s[i]+32 == test)
            count++;
            s[i]=NULL;
        }
        printf("%d\n",count);
        count = 0;
        getchar();//NOTE
    }
    return 0;
}
