#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,num,count1=0;
    int count2=0;
    double sum=0.0;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&num);
            if(num<0)
            count1 ++;
            if(num>0)
            {
                count2++;
                sum+=num;
            }
        }
        if(count2==0)
        printf("%d %.1lf\n",count1,0.0);
        printf("%d %.1lf\n",count1,sum/count2);
        sum=0.0;
        count1 = count2 =0;
    }
    return 0;
}

