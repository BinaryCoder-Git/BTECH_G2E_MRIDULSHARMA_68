
#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    int si,ci,amount;
    printf("enter principle,rate,time:\n");
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);
    si=p*r*t/100;
    printf("the si is:%d\n",si);
    amount= p*pow(1+(r/100),t);
    ci=amount-p;
    printf("the ci is:%d",ci);
}