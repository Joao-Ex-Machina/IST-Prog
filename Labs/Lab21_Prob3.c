/*-------------------------------------------------------------------------------------------------+
| Exercise 3|Calculate the distance and max height hitten of a thrown projectile, verify if the    |
|           |projectile hits the ceilling in the given movement                                    |
+--------------------------------------------------------------------------------------------------+
| Author: Joao Barreiros C. Rodrigues (Joao-Ex-Machina)                                            |
| Date: 14 March 2021                                                                              |
+-------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define g 9.8 
#define pi 3.1416

float fixed_height, max_height, initial_velocity, angle, distance;

int main(){
    printf("Insert the initial velocity, in meters per second");
    scanf("\n %f", &initial_velocity);
    printf("\n Insert the angle of the throw in degrees");
    scanf("\n %f", &angle);
    printf("\n insert the height difference between the throwing point and the ceiling, in meters");
    scanf("\n %f", &fixed_height);
      if (fixed_height <= 0){
            printf("\n Height must be different from 0 and positive ");
            exit(0);
    }
    angle = (angle*pi)/180; //Conversion from degrees to radians
    distance = (initial_velocity * initial_velocity * sin (2*angle))/g;
    max_height = (initial_velocity * initial_velocity * sin (angle)* sin (angle))/(2*g);
    printf("\n The max height that the projectile hits is %.3f meters", max_height);
     if (max_height >= fixed_height)
            printf("\n The thrown projectile hits the ceilling!");

    else
    printf("\n The distance that the projectile hits is %.3f meters", distance);
}