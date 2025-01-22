#include <stdio.h>
#include <ctype.h>

int length(char str[]){
    int i=0;
    for(i=0;str[i]!='\0';++i); // i is incremented until string character is not equal to null
    return i;
}
int main() {
    int len=0,v=0,c=0,s=0,n=0;
    char str[20],ch;
    printf("Enter a password:");
    scanf("%s",&str);
    for (int i = 0; i < length(str); i++) {
        ch = tolower(str[i]); // Convert to lowercase for consistent comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
        else if (ch >= 'a' && ch <= 'z') c++;
        else if (str[i] >= '0' && str[i] <= '9') n++;
        else s++;}
        
        printf("Your password has:\n Vowels: %d\n Consonants: %d\n Numbers: %d\n Special Characters: %d\n",v,c,n,s);
        return 0;
}
