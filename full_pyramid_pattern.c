#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for(int s=0;s<=(n-i-1);s++)
            printf(" ");
        for (int j=1;j<=2*i+1;j++){
            printf("*");}
        printf("\n");
    }
    return 0;
}
