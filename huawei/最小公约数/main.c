#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,temp;
    int m_temp,n_temp;
    int gongbeishu,yushu;
    scanf("%d%d",&m,&n);
    //Õ·×ªÏà³ý·¨
    if(m>n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    m_temp = m;
    n_temp = n;
    while(1)
    {
        yushu = n_temp % m_temp;
        if(yushu == 0)
        {
            gongbeishu = n * m / m_temp;
            break;
        }
        else
        {
            n_temp = m_temp;
            m_temp = yushu;
        }
    }

    printf("%d\n",gongbeishu);
    return 0;
}
