#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1024];
    int i,length;
    int left_flag=0,right_flag=0;

    while(scanf("%s",s)!=EOF)
    {
        length =strlen(s);
    for(i=0;i<length;i++)
    {
        left_flag=0;right_flag=0;
        if(s[i]>='0' && s[i]<='9')
        {
            if(i!=length-1)
            {
                 if((s[i+1]>='0' && s[i+1]<='9'))
                 right_flag =1;
            }
            if(i!=0)
            {
                if((s[i-1]>='0' && s[i-1]<='9'))
                left_flag =1;
            }
            if(left_flag ==0 && right_flag==1)
            printf("*%c",s[i]);
            if(left_flag ==1 && right_flag==1)
            printf("%c",s[i]);
            if(left_flag ==1 && right_flag==0)
            printf("%c*",s[i]);
            if(left_flag ==0 && right_flag==0)
            printf("*%c*",s[i]);

        }

        else
        printf("%c",s[i]);
    }
    printf("\n");

    }


    return 0;
}
