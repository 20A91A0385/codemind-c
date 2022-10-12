float area(int r)
{
    float k;
    k=(3.14*r*r);
    return k;
}
#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    float a=area(r);
    printf("%.2f",a);
}