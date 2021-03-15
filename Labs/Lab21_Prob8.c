/*-------------------------------------------------------------------------------------------------+
| Exercise 8|Calculate the possible angles to hit a hollow target with a variable diameter and at  |
|           |a variable velocity and distance. Print the possible angles.                          |
+--------------------------------------------------------------------------------------------------+
| Author: Joao Barreiros C. Rodrigues (Joao-Ex-Machina)                                            |
| Date: 15 March 2021                                                                              |
+-------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define g 9.8 
#define pi 3.1416

float fixed_height, max_height, initial_velocity, distance_min, distance, distance_max, diameter, distance_target, converted_angle;
int angle, aux_angle;

int main(){
    printf("Insert the initial velocity, in meters per second ");
    scanf("%f", &initial_velocity);
    printf("\n Insert the diameter of the hollow target, in meters ");
    scanf("%f", &diameter);
    printf("\n insert the distance between the target and throwing point, in meters ");
    scanf("%f", &distance_target);
    printf("\n insert the height difference between the throwing point and the ceiling, in meters ");
    scanf("%f", &fixed_height);
      if (fixed_height <= 0){
        printf("\n Height must be different from 0 and positive ");
        exit(0);
    }
    distance_min = distance_target - (diameter/2);
    distance_max = distance_target + (diameter/2);
    for(angle=0; angle <= 90; ++angle){
        converted_angle  = (float) (angle*pi)/180; //Conversion from degrees to radians
        distance = (pow(initial_velocity,2) * sin (2*converted_angle))/g;
        max_height = (pow(initial_velocity,2) * pow(sin (converted_angle),2))/(2*g);
        if (max_height < fixed_height && distance_min < distance && distance_max > distance){
            printf ("\n %d degrees is a valid angle for the throw", angle);
            ++aux_angle;
    }
    }
    if (aux_angle == 0){
        printf ("\n In the scenario you inserted, hitting the target is not possible!"); 
    }


}