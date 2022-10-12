#include<stdio.h>
#include<math.h>
float area(int a,int b,int c)
{
    //int s;
    float s,z;
    s=(a+b+c)/2.0;
    z=sqrt(s*(s-a)*(s-b)*(s-c));
    return z;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float q=area(a,b,c);
    printf("%.2f",q);
}
