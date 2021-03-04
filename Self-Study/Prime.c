#include <stdio.h>
#include <stdlib.h>
int a;
int n;
int flag;
int flagprime;

int main(){
    flagprime = 1;
    printf ("Insert number for prime test:");
   scanf("%d", &n);
  for ( a = 2; a < n; a = ++ a ){
      flag = n % a;
  if (flag == 0) {
      flagprime = 0;
        }
    }
    if (flagprime == 1) {
      printf ("%d\n is prime ", n);
      printf ("now exiting...");
      exit (0);
        }
     else {
      printf ("%d\n is not prime ", n);
      printf ("now exiting...");
      exit (0);
        }
  return 0;
}