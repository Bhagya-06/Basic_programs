#include <stdio.h>
int main(){
    int n,count=0,a=0,b=1,c=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=2; i<n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}
