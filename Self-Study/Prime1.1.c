
/*-------------------------------------------------------------------------------------------------+
| Prime 1.1 | A more optimized and correct version of Prime.c,                                     |
|           | Determine the primality of any positive integer n                                    |
+--------------------------------------------------------------------------------------------------+
| Author: Joao Barreiros C. Rodrigues (Joao-Ex-Machina)                                            |
| Date: 08 March 2021                                                                              |
+-------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a;
int n;
int flag;
int flagprime;

int main(){
    flagprime = 1; //All numbers start flagged as prime 
    printf ("Insert number for prime test:"); 
   scanf("%d", &n);
   if (n <= 0) { //exclude null and negative n's
       printf ("\n %d is not a positive integer, ", n);
       printf ("It cannot be prime-tested");
       printf ("\n now exiting...");
       exit(0);
   }
   if (n == 1){ //Set 1 as a non-prime by definition
        printf ("1 is not prime by definition", n);
        printf ("\n now exiting...");
        exit(0);
   }
  for ( a = 2; a <= sqrt(n);  ++ a ){ //trial divison test
      flag = n % a;
      
  if (flag == 0) { //if it has any other divisor remove the prime-flag
      flagprime = 0;
        }
    }
    if (flagprime == 1) {
      printf ("\n %d is prime ", n);

      printf ("\n now exiting...");
      exit (0);
        }
     else {
      printf ("\n %d is not prime ", n);
      printf ("\n now exiting...");
      exit (0);
        }
  return 0;
}