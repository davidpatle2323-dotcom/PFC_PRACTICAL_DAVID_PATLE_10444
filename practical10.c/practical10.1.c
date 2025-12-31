#include<stdio.h>
int main(){
    //Name: David Patle
    //Erp: 10444
    //Que : Max and Min element in 2D array
    int r,c;
    printf("enter row and column :");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max) max=arr[i][j];
            if(arr[i][j]<min) min=arr[i][j]; 
        }
    }
    printf("Max element in 2D is %d\n",max);
    printf("Min element in 2D is %d\n",min);
    return 0;
}
//output:
//enter row and column :2 3
//1 2 3 4 5 6
//Max element in 2D is 6
//Min element in 2D is 1