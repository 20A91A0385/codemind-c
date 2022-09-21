#include<stdio.h>
int main()
{
    int x,y,r=0,a,b,c,g=0;
    scanf("%d",&x);
    a=x*x;
    while(x!=0)
    {
        y=x%10;
        r=r*10+y;
        x=x/10;
        b=r*r;
    }
       while(b!=0)
       {
	   
        c=b%10;
        g=g*10+c;
        b=b/10;
        //b=r*r;
        }

    if(a==g)
    {
      printf("True"); 
    }
    else
    {
        printf("False");
    }
}