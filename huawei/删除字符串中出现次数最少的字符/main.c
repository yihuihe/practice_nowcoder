#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[30];
    int  length,i,j,min;
    int  count[27];
    while(scanf("%s",s)!=EOF)
    {
        int  count_length=0;
        int  count[27]={0};

        length = strlen(s);
        for(i=0;i<length;i++)
        {
            count[s[i]-'a'] ++ ;
        }
        min = count[s[0]-'a'];
        for(j=0;j<length;j++)
        {
            if( count[s[j]-'a'] <= min)
            min = count[s[j]-'a'];
        }
        for(i=0;i<length;i++)
        {
            if(count[s[i]-'a']>min)
            printf("%c",s[i]);
        }
        printf("\n");

    }
    return 0;
}
