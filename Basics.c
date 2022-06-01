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
