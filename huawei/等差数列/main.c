#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=2;
    int next=2;
    int i = 0;

    while(scanf("%d",&num)!=EOF)
    {
        if(num<=0)
        return -1;
        if(num == 1 )
        {
            printf("%d\n",2);
        }
        if(num >1)
        {
            for(i=0;i<num-1;i++)
            {
                next = next +3;
                sum=sum+next;
            }
            printf("%d\n",sum);
            sum =2;next=2;
        }

    }
    return 0;
}
