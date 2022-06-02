/*Hellow WOrld*/
#include <stdio.h>
int main()
{
 printf("Hello, World! \n");

 return 0;
}



/* Size of int */
#include <stdio.h>
#include <limits.h>
int main()
{
 printf("Storage size for int : %d \n", sizeof(int));

 return 0;
}


/* storage space taken by a float type and its range values */
#include <stdio.h>
#include <float.h>
int main()
{
 printf("Storage size for float : %d \n", sizeof(float));
 printf("Minimum float positive value: %E\n", FLT_MIN );
 printf("Maximum float positive value: %E\n", FLT_MAX );
 printf("Precision value: %d\n", FLT_DIG );

 return 0;
}


// Arithmetic Operations
#include <stdio.h>
int main() {
    int a = 10, b = 5, c;
    c = a + b;
    printf("Sum = %d \n", c);
    c = a - b;
    printf("Diff = %d \n", c);
    c = a*b;
    printf("Product = %d \n", c);
    c = a/b;
    printf("Quotient = %d \n", c);
    c = a % b;
    printf("Reminder = %d \n", c);
    return 0;
}



// If Control Statement
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if(number%2 == 0){
        printf("Your number is %d and it is an even number", number);
    }
    return 0;
}
