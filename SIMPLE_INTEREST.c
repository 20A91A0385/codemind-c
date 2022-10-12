#include<stdio.h>
int si(int a,int b,int c)
{
    int k;
    k=((a*b*c)/100);
    return k;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int y=si(a,b,c);
    printf("%d",y);
}