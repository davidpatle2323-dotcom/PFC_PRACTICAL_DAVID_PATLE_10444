#include<stdio.h>
int main(){
    //Name: David Patle
    //Erp: 10444
    //Que : Reverse an array.
    int n;
    printf("number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Reversed array:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
//output:
//number of elements:5
//enter elements:1 2 3 4 5 
//Reversed array:
//54321