#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int  smallChar=0,bigChar=0,space=0,digit=0,other=0;
    int  charSum=0;
    char s[1024];
    int     length=0,i;

    while(gets(s))
    {
        length = strlen(s);
        for(i=0;i<length;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            smallChar++;
            else if(s[i]>='A' && s[i]<='Z')
            bigChar++;
            else if(s[i]>='0' && s[i]<='9')
            digit++;
            else if(s[i]==' ')
            space++;
            else
            other++;
        }
        printf("%d\n",smallChar+bigChar);
        printf("%d\n",space);
        printf("%d\n",digit);
        printf("%d\n",other);
        smallChar=0;bigChar=0;space=0;digit=0;other=0;
    }
    return 0;
}
