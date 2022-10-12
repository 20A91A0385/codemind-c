#include<stdio.h>
int div(int a,int b)
{
 int m;
   m=a/b;
    return m;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int y=div(a,b);
    printf("%d",y);
}