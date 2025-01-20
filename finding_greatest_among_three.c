#include <stdio.h>

int main() {
    int a,b,c; // Declaring required variables
    printf("Enter 3 integers:");
    scanf("%d %d %d",&a,&b,&c); // Getting input from the user
    // Using nested if to find the greatest
    if (a>b){
        if (a>c) printf("%d is the greatest.",a); // a is greater than b and c
        else printf("%d is the greatest.",c); // a is greater than b but c is greater than a
    } else{
        if (b>c) printf("%d is the greatest.",b); // b is greater than a and c
        else printf("%d is the greatest.",c); // b is greater than a but c is greater than b
    }
    return 0;
}
