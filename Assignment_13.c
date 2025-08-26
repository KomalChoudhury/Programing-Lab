#include<stdio.h>
int main(){

float length,breadth,area,perimeter;
printf("Enter the length:\n");
scanf("%f", &length);
printf("Enter the breadth:\n");
scanf("%f", &breadth);
area = length*breadth;
perimeter=2*(length+breadth);
printf("area=%f\n", area);
printf("perimeter=%f\n", perimeter);
return 0;

}
