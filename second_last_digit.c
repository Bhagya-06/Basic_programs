#include <stdio.h>
int main(){
    int n,res=0,org=0;
    printf("Enter a number:");
    scanf("%d",&n);
    org = n;
    n = n%100;
    res = n/10;
    printf("The second last digit of %d is %d",org,res);
    return 0;
}
