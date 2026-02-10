#include<stdio.h>
int main()
{
    
    int a,b,c;
    printf("enter three no:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c)
    printf("a is greatest");
    else if(b>a && b>c)
    printf("b is greatest");
    else
    printf("c is greatest");
    return 0;

}