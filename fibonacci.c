#include <stdio.h>

int main() {
    // Declaring and Initializing required variables
    int a=0,b=1,c=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d %d",a,b); // Print first two numbers
    // Assign i=2 because first two numbers already printed
    for (int i=2;i<=n;i++){
        c=a+b;// third no = second no + first no
        printf(" %d",c);
        a=b;// first no = second no
        b=c;// second no = third no
    }
    return 0;
}
