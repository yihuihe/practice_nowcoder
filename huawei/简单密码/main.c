#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[1024];
    int length=0,i;
    char temp;

    while(scanf("%s",s)!=EOF)
    {
        length = strlen(s);
        for(i=0;i<length;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                if(s[i]=='Z')
                temp = 'a';
                else
                temp = s[i] + 33;
                printf("%c",temp);
            }
            if(s[i]>='a' && s[i]<='z')
            {
                if(s[i] == 'a' || s[i]=='b' || s[i]=='c')
                printf("%d",2);
                if(s[i] == 'd' || s[i]=='e' || s[i]=='f')
                printf("%d",3);
                if(s[i] == 'g' || s[i]=='h' || s[i]=='i')
                printf("%d",4);
                if(s[i] == 'j' || s[i]=='k' || s[i]=='l')
                printf("%d",5);
                if(s[i] == 'm' || s[i]=='n' || s[i]=='o')
                printf("%d",6);
                if(s[i] == 'p' || s[i]=='q' || s[i]=='r' || s[i]=='s')
                printf("%d",7);
                if(s[i] == 't' || s[i]=='u' || s[i]=='v')
                printf("%d",8);
                if(s[i] == 'w' || s[i]=='x' || s[i]=='y' || s[i]=='z')
                printf("%d",9);
            }
            if(s[i]>='0' && s[i]<='9')
            printf("%c",s[i]);

        }
         printf("\n");

    }

    return 0;
}
