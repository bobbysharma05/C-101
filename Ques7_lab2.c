#include<stdio.h>

int main(){
    int a,b;
    printf("The value of a is ");
    scanf("%d",&a);

    printf("The value of b is ");
    scanf("%d",&b);

    printf("The greatest number is %d",a>b?a:b);
    return 0;
}