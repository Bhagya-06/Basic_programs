#include <stdio.h>
int calcpow(int base,int power){
    if (power==0) return 1;
    else return base*calcpow(base,power-1);
}
int main(){
    int base,power,result;
    printf("Enter base and power:");
    scanf("%d %d",&base,&power);
    result = calcpow(base,power);
    printf("%d^%d is %d",base,power,result);
    return 0;
}
