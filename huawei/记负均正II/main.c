#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int count1 = 0,count2 = 0;
    double sum =0.0;

    while (scanf("%d",&num)!=EOF)
    {
        if(num<0)
        {
            count1 ++ ;
        }
        else
        {
            count2 ++;
            sum += num;
        }
    }
    printf("%d\n",count1);
    printf("%.1lf\n",sum/count2);
    return 0;
}
