#include <stdio.h>
int main() 
{
    int a, b;
    printf("Enter value for a");
    scanf("%d",&a);
    printf("enter value for b");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("after swapping values of a and b are a=%d b=%d",a,b);
    return 0;
}

