#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter first integer:");
    scanf("%d",&a);
    printf("Enter second integer:");
    scanf("%d",&b);
    while (b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("HCF is %d \n", a);
    return 0;

}