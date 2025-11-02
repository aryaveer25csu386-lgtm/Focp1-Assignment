#include<stdio.h>
int main(){
    int num,og,last,result=0;
    printf("Enter a number to check");
    scanf("%d",&num);

    og=num;
    while (og!=0){
        last=og%10;
        result=result+(last*last*last);
        og=og/10;

    }
    if (result==num){
        printf("%d is Armstrong number\n",num);
        
    }
    else {
        printf("%d is not armstrong number\n",num);

    }
    return 0;

}