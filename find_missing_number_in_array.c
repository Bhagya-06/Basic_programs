#include <stdio.h>

int main() {
    int n[10];
    printf("Enter 10 consecutive numbers with a missing number:");
    for (int i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    for (int i=0;i<9;i++){
        if (n[i+1]-n[i]==1) continue; //if the difference between adjacent numbers is 1 then skip
        else printf("%d",n[i]+1); // if difference is not 1 then print the missing number
    }
    return 0;
}
