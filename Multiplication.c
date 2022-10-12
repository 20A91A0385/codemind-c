#include<stdio.h>
int mul(int a,int b)
{
 int m;
   m=a*b;
    return m;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int y=mul(a,b);
    printf("%d",y);
}