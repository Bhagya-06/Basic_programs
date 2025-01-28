#include <stdio.h>

int main(){
    int x,x1;
    printf("Enter a negative number:");
    scanf("%d",&x);
    x1 = x - (x*2); // eg: x=-20 then x*2=+40 which makes x-(x*2)= -20+40 = +20
    printf("Negative number: %d\t Positive number: %d",x,x1);
    return 0;
}
