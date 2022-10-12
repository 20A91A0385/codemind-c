#include<stdio.h>
int cost(int a,int b,int c,int d)
{
    int z,l,m;
    z=(a+(2*c))*(b+(2*c));
    l=(a*b);
    m=((z-l)*d);
    return m;
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int y=cost(a,b,c,d);
    printf("%d",y);
}