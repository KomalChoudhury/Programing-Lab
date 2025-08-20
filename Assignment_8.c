#include<stdio.h>
int main(){
	float value_f,value_c, c,f;
	printf("Enter the value in fahrenheit: \n");
	scanf("%f", &value_f);
	printf("Enter the value in celsius: \n");
	scanf("%f", &value_c);
	c = (value_f - 32) * (5.0 / 9.0);
	f = (value_c * (9.0 / 5.0)) + 32;
	printf(" fahrenheit to celsius is: %.2f\n", c);
	printf("celsius to fahrenheit is: %.2f\n", f);
	return 0;
}
