
/*-------------------------------------------------------------------------------------------------+
| Tabuada.c |Generate two random integers, display them . Scanned an integer and compare it        |
|           |with the multiplication of the the display ints. Exit the program is 0 is scanned     |
+--------------------------------------------------------------------------------------------------+
| Author: Joao Barreiros C. Rodrigues (Joao-Ex-Machina)                                            |
| Date: 04 April 2021                                                                              |
+-------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int f, a, p ;

void algorithm(){
    srand ( time(NULL) );
    f = (rand()%8 + 1) ;
    a = (rand()%8 + 1) ;
    printf ("%d", f);
    printf(" vezes ") ;
    printf("%d ", a);
    printf("equals:\n");
    scanf ("%d", &p) ;
    while ((p !=(f*a)) && (p !=0)){
        printf("Wrong!");
        printf("Try again:");
        scanf ("%d", &p) ;
    }

    if (p == (f*a)) {
     printf ("Correct!");
    algorithm();
 }
  if (p==0){
      printf ("Zero scanned! \n");
      printf ("now exiting....");
      exit(0);
  }
}
int main(){
    algorithm();
 
}