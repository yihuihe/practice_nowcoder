#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp,flag;
    int s[1024];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        scanf("%d",&flag);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i]>s[j])
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        if(flag == 0)
        {
            for(i=0;i<n-1;i++)
            printf("%d ",s[i]);
            printf("%d\n",s[n-1]);
        }
        if(flag == 1 )
        {
            for(i=n-1;i>0;i--)
            printf("%d ",s[i]);
            printf("%d\n",s[0]);
        }
    }
    return 0;
}
