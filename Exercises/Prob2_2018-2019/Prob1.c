/*-------------------------------------------------------------------------------------------------+
| Exercise 1 | Print all divisors of a scanned integer and then print the average of the divisors  |
|           | with three decimal places                                                            |
+--------------------------------------------------------------------------------------------------+
| Author: Joao Barreiros C. Rodrigues (Joao-Ex-Machina)                                            |
| Date: 05 March 2021                                                                              |
+-------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
int n, a, sum, size, flag;
float avrg;


int main(){
    size = 0;
    sum = 0;

    printf ("Insert number:");
   scanf("%d", &n);
  for ( a = 1; a <= n;  ++ a ){
      flag = n%a;
      if (flag == 0){
          printf ("\n %d is a divisor", a);
          sum = sum + a; // If a is a divisor its value is "stored" in sum of all previous divisors
          ++ size; // If a is a divisor the size of elements in the sum increments by one
      }
  }
  avrg = (float) sum/size;
  printf ("\n %.3f is the average value of the divisors", avrg);
}
