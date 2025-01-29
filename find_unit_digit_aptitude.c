#include <stdio.h>

int exponentiation(int base,int power){
    int res=1;
    for(int i=0; i<power; i++) {
        res*=base;}
    return res;
}

int findunitdigit(int base, int power){
    int result;
    //Anything power a base with unit digit 0,1,5,6 has itself as unit digit.
    //eg: 2345^2348589938 has unit digit 5 because unit digit of base is 5.
    if (base == 0 || base == 1 || base == 5 || base == 6) return base;
    //if unit digit of base is 4 then if power is odd unit digit is 4 else unit digit is 6.
    //eg: 23680894 ^ 33345789 has unit digit 4 because unit digit of base is 4 and power is odd.
    else if (base == 4){
        if (power%2 == 0) result = 6;
        else result = 4;}
    //if unit digit of base is 9 then if power is odd unit digit is 9 else 1
    else if (base == 9){
        if (power%2==0) result = 1;
        else result = 9;}
    //for base with unit digit 2 and 8 if power is multiple of 4 then unit digit is 6 else covert power to multiple of 4 then add remainder (i.e) 2^33 can be written as (2^32) * (2^1) = 6*2 gives unit digit 2 (unit digit in 12)
    else if (base == 2 || base == 8){
        if (power%4==0) result = 6;
        else result = 6 * exponentiation(base,power%4);
    }
    //for base with unit digit 3 and 7 if power is multiple of 4 then unit digit is 1 else covert power to multiple of 4 then add remainder
    else if (base == 3 || base == 7){
        if (power%4==0) result = 1;
        else result = 1 * exponentiation(base,power%4);
    }
    else {
        printf("Invalid input");}
    return result%10;
}

int main() {
    int base, power, result;
    printf("Enter base and power:");
    scanf("%d %d",&base,&power);
    result = findunitdigit(base%10,power);
    printf("%d",result);
    return 0;
}
