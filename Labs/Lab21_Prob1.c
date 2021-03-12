/*-------------------------------------------------------------------------------------------------+
| Exercise 1| Print the hour, minutes and seconds equivalent to a scanned integer number of seconds|
|           |                                                                                      |
+--------------------------------------------------------------------------------------------------+
| Author: Joao Barreiros C. Rodrigues (Joao-Ex-Machina)                                            |
| Date: 12 March 2021                                                                              |
+-------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int input_secs, out_hours, out_minutes;
float out_secs;


int main(){
    printf("\n Insert a integer number of seconds\n");
    getch();
    scanf("\n%d", &input_secs);
    out_hours = input_secs / 3600;
    out_minutes = (input_secs - ((out_hours)*3600)) / 60;
    out_secs = ((input_secs - ((out_hours)*3600) - ((out_minutes)*60)));
    printf("\n %d seconds is equal to %d hours, %d minutes and %.2f seconds", input_secs, out_hours, out_minutes, out_secs );
}