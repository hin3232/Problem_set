#include<stdio.h>
int main (){
    float length,breadth,area;
    printf ("Enter length and breadth:\n");
    scanf("%f ",&breadth);
    scanf("%f",&length);
    area = length*breadth;
    printf ("the area of a rectangle is \n %f",area);
    return 0;
}