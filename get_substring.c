#include <stdio.h>

void getSub(char *str, char *sub, int pos, int l) {
    int i = 0;
    // Copy substring into sub
    while (i < l) {
        sub[i] = str[pos + i]; //using position and i each character is stored until i < l
        i++;
    }
    // Null terminate the substring
    sub[i] = '\0';  
}


int main() {
    char str[20];
    char sub[20];
    int pos,l;
    printf("Enter string:");
    scanf("%s",&str);
    printf("Enter start position and length of substring:");
    scanf("%d %d",&pos,&l);

    // Calling the function
    getSub(str, sub, pos, l);

    printf("%s", sub);
    return 0;
}
