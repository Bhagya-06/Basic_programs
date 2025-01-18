#include <stdio.h>
int main() {
    // Declaring and Initializing variables required ; n = integer, rem = remainder, rev = reversed integer
    int n,rem=0,rev=0; 
    
    // Get the input from the user using printf() and scanf()
    printf("Enter an integer to reverse:");
    scanf("%d",&n);
    
    // Use while loop to make sure the process loops until n>0
    while (n>0){
        // Get the last digit of n using % operator
        rem = n%10;
        // last digit is added after multiplying reverse with 10 to make sure the place of the digit is secured
        rev = (rev*10)+rem;
        // remove the last digit from n
        n=n/10;}
    printf("The reverse of integer is:%d",rev);
    return 0;
}
