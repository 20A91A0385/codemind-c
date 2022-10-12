#include<stdio.h>
float mul(float a,float b)
{
 float m;
   m=a*b;
    return m;
}
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float y=mul(a,b);
    printf("%.2f",y);
}