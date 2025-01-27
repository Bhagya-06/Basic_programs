#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two integers to swap:");
    scanf("%d %d",&a,&b); //eg: a=3 & b=4
    printf("Before: a = %d b = %d\n",a,b);
    a = a+b; //eg: a = 3+4 = 7
    b = a-b; //eg: b = 7-4 = 3 (Before a = 3, so swapped)
    a = a-b; //eg: a = 7-3 = 4 (Before b = 4, so swapped)
    printf("After: a = %d b = %d",a,b);
    return 0;
}
