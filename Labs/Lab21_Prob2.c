/*-------------------------------------------------------------------------------------------------+
| Exercise 2| Print the hour, minutes and seconds equivalent to a scanned integer number of seconds|
|           |                                                                                      |
+--------------------------------------------------------------------------------------------------+
| Author: Joao Barreiros C. Rodrigues (Joao-Ex-Machina)                                            |
| Date: 12 March 2021                                                                              |
+-------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int time1[3], time2[3], diference[3], i;

int main(){
    printf("Insert a first integer number set of hours, minutes and seconds following this order\n");
    scanf("%d", &time1[1]);
    printf("First Hour stored\n");
    scanf("%d", &time1[2]);
    printf("First set of minutes stored\n");
    scanf("%d", &time1[3]);
    printf("First set of seconds stored\n");
    if (time1[1] > 23 || time1[1] < 0 || time1[2] > 59 || time1[2] < 0 ||time1[3] > 59 || time1[3] < 0){
        printf("Insert valid values on the next run");
        exit(0);
    }
     printf("Insert a second integer number set of hours, minutes and seconds following this order\n");
    scanf("%d", &time2[1]);
    printf("second Hour stored\n");
    scanf("%d", &time2[2]);
    printf("second set of minutes stored\n");
    scanf("%d", &time2[3]);
    printf("second set of seconds stored\n");

    if (time2[1] > 23 || time2[1] < 0 || time2[2] > 59 || time2[2] < 0 ||time2[3] > 59 || time2[3] < 0){
        printf("Insert valid values on the next run");
        exit(0);
    }
for (i=1; i < 4; ++i){
diference[i] = fabs(time1[i] - time2[i]);
} 

printf("The diference between the two sets is %d hour(s), %d minute(s) and %d second(s)", diference[1],diference[2],diference[3]);
}
