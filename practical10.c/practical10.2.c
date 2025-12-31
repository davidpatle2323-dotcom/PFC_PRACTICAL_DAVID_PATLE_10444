#include<stdio.h>
int main(){
    //Name: David Patle
    //Erp: 10444
    //Que : Sum of diagonal elements of 2D array
    int r,c;
    printf("enter number of rows and columns:");
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
           if(i==j) sum=sum+arr[i][j];
        }

    }
    printf("%d",sum);
}
//output:
//enter number of rows and columns:2 3
//1 2 3 4 5 5
//6