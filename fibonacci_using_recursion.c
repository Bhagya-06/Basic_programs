#include <stdio.h>
int fibonacci(int n){
    if(n>1) return fibonacci(n-1) + fibonacci (n-2);
    else if(n==1) return 1;
    else return 0;
}

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The fibonacci upto %d is",n);
    for(int i=0;i<=n;i++){
        printf("\n%d"fibonacci(i));
    }
    return 0;
}
