#include <stdio.h>

int main() {
    int n,temp,res=0,last;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        last = temp%10; //take last digit
        res += last*last*last; //add the cube of last digit to result
        temp = temp/10;
    }
    if(res==n) printf("%d is an Armstrong number",n);
    else printf("%d is not an Armstrong number",n);
    return 0;
}
