#include <stdio.h>

int main() {
    int n[20], size, count, i, j;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    printf("Unique elements in the array: ");
    for(i = 0; i < size; i++) {
        count = 0; // reset count each time
        for(j = 0; j < size; j++) {
            if(n[i] == n[j]) 
                count++; //increment count for each number
        }
        if (count == 1) 
            printf("%d ", n[i]);
    }
    
    return 0;
}
