#include <stdio.h>

int main() {
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1; i<=100; i++){
        if (i%n==0) {printf("\nBuzz");} //when i  is multiple of n, say buzz
        else {printf("\n%d",i);}
    }
    return 0;
}
