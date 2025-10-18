#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,s,area,perimeter;
	printf("Enter the sides of the triangle:");
	scanf("%f %f %f", &a,&b,&c);
	perimeter = a+b+c;
	s = perimeter/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	if(area==perimeter){
		printf("equalise triangle");
	}
	else{
		printf("NOT a eqalise triangle");
	}
	return 0;
}
