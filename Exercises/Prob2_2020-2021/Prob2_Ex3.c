/*-------------------------------------------------------------------------------------------------+
| Exercise 3 | Print a triangle of a scanned height with the "*" char.                             |
|            |                                                                                      |
+--------------------------------------------------------------------------------------------------+
| Author: Joao Barreiros C. Rodrigues (Joao-Ex-Machina)                                            |
| Date: 21 March 2021                                                                              |
+-------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
int height, aux, i;
int main()
{
    do{
    printf("Insert the height of the triangle to print\n");
    scanf("%d", &height);
    if(height <= 0){
       printf("Heights cannot be negative or null!\n");
    }  
   } while (height <= 0); // verification loop
   for (i=0; i < height-1; ++i){
       for (aux=0; aux <=i; ++aux){
           printf("*");
       }
       printf("\n");
   }
   for (i=height-1 ; i > -1; --i){
       for (aux = 0; aux <=i; ++aux){
           printf("*");
       }
       printf("\n");
   }
}
