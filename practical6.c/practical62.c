#include <stdio.h>
int main() {

     // Name : David Patle 
    // ERP : 10444
     //Practical 6 : Q.2. Sum of even numbers using continue
    int a, b, i = a, sum = 0;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    i = a;
    
    while (i <= b) {
        if (i % 2 != 0) {
            i++;
            continue;
        }
        sum += i;
        i++;
    }
    printf("Sum of even numbers: %d", sum);
    return 0;
}


  

// output :-
// Enter a and b: 1
// 10
// Sum of even numbers: 30