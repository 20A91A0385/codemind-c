#include<stdio.h>
int main()
{
    int a;
    float da,hra,b;
    scanf("%d",&a);
    if(a<=10000)
    {
        da=a*0.80;
        hra=a*0.20;
    }
    else if(a<=20000)
    {
       da=a*0.90;
       hra=a*0.25;
    }
    else
    {
       da=a*0.95;
       hra=a*0.30;
    }
    b=a+da+hra;
    printf("%.2f",b);
}