#include<stdio.h>
int diagonals(int a)
{
    int z;
    z=a*(a-3)/2;
    return z;
}
int main()
{
    int a;
    scanf("%d",&a);
    int y=diagonals(a);
    printf("%d",y);
}