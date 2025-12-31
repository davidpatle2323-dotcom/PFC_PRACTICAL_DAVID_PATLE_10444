#include<stdio.h>
int main(){
    
 // Name : David Patle 
    // ERP : 10444
    //Practical 7: Q.3.pattern//
    int n;
    scanf("%d",&n);
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
        ch='A';
    }
    return 0;
}


// output :-
// 7
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF
// ABCDEFG