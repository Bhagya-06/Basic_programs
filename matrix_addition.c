#include <stdio.h>
int main() {
    int m,n,i,j,first[10][10],second[10][10],res[10][10];
    printf("Enter rows and columns of matrix (<10):");
    scanf("%d %d",&m,&n);
    printf("First matrix:\n");//Getting input for first matrix
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element %d%d:",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("Second matrix:\n"); //Getting input for second matrix
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element %d%d:",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    printf("Resulting matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            res[i][j]=0;
            res[i][j] = first[i][j]+second[i][j]; //Adding the values of matrix and storing it in result
            printf(" %d ",res[i][j]);
        }
        printf("\n"); //To print the matrix in m*n format
    }
    return 0;
}
