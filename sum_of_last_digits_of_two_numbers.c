#include <stdio.h>

int main() {
    int num1,num2,sum=0;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    sum = (num1%10) + (num2%10);
    printf("Sum of last digit of given two numbers: %d",sum);
    return 0;
}
