#include<stdio.h>
float avg(int a,int b)
{
    float l;
    l=(a+b)/2.0;
    return l;
    
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float k=avg(a,b);
    printf("%.4f",k);
}