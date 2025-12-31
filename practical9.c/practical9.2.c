#include<stdio.h>
int main(){
    //Name: David Patle
    //Erp: 10444
    //Que : Max and Min elements of an array
    int n,i;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max=0;
    int min=9;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min)  min=arr[i];
    }
    printf("max element of an array is %d\n",max);
    printf("min element of an array is %d\n",min);
    return 0;
}
//output:
//enter number of elements:5
//1 2 3 4 5 
//max element of an array is 5
//min element of an array is 1