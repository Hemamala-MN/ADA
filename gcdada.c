#include<stdio.h>
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}



int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("GCD OF(%d,%d)=%d",a,b,gcd(a,b));
}
