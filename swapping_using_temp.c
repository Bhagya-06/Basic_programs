#include <stdio.h>

int main() {
    int a,b,temp;
    printf("Enter two integers to swap:");
    scanf("%d %d",&a,&b);
    printf("Before: a = %d b = %d\n",a,b);
    temp = a; //storing a in a temp variable
    a = b; //storing b in a
    b = temp; //storing a in b using temp variable
    printf("After: a = %d b = %d",a,b);
    return 0;
}
