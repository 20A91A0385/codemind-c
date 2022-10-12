#include <stdio.h>
float celsius(int f)
{
    float c;
    c=((f-32)/1.8);
    return c;
    
}
int main()
{
    int f;
    scanf("%d",&f);
    float n=celsius(f);
    printf ("%.2f",n);
}