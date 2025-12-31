#include<stdio.h>
int main(){
    //Name: David Patle
    //Erp: 10444
    //Que : Row wise sum of 2d array
    int r,c;
    printf("Enter number of rows and column:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    return 0;
}
//output:
//Enter number of rows and column:2 3
//1 2 3 4 5 6
//6 15