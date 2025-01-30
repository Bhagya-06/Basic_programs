#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    printf("Enter a string:");
    scanf("%s",&str1);
    
    for (int i=0;i<strlen(str1);i++){
        switch(str1[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c",str1[i]); //for all switch case only one statement so if any one of the case is true the statement is executed
                break;
        }
    }
    return 0;
}
