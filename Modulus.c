#include<stdio.h>
int mod(int a,int b)
{
 int m;
   m=a%b;
    return m;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int y=mod(a,b);
    printf("%d",y);
}