#include<stdio.h>
int main(){
    //Name: David Patle
    //Erp: 10444
    //Que : Sum of all even element oa an array
    int n,i,sum=0;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0) sum=sum+arr[i];
    }
    printf("Sum of even elements in %d",sum);
    return 0;
}

//output:
//Enter number of elements:
//5
//Enter elements:
//1 2 3 4 6 
//Sum of even elements in 12