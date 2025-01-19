#include <stdio.h>
#include <string.h> //To use strcmp() function

int main() {
    
    // Declaring and Initializing required variables
    int len=0;// len = length of the string
    char str[20],rev[20]; //str = string, rev = reverse
    printf("Enter a string to check if it is palindrome:");
    scanf("%s",&str);
    
    //To find the length of the string
    for(int i=0; str[i]!='\0'; i++)
        {len++;}

    //To reverse the given string
    for (int i=0; i<len; i++){
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
    
    //Comparing string and its reverse strings using strcmp()
    if (strcmp(str, rev) == 0) {
        printf("The string is a palindrome.\n");} 
    else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
