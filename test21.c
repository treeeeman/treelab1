#include<stdio.h>

int *sum(int x)
{
    static int sum;
    sum=0;
    for(;x>0;x--)
        sum+=x;
    return &sum;
}

int *ori(int x)
{
    static int a;
    a=x;
    return &a;
}

int main()
{
    int *(*p)();
    int a=0,b[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a);
        if(a==1)
            p=sum;
        else if(a==2)
            p=sum;
        else
            break;
        b[i]=*p(3);
    }
    printf("%d %d %d",b[0],b[1],b[2]);
    return 0;
}