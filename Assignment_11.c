#include<stdio.h>
int main(){
	    int num,num1,num2;
	    printf("Enter an integer:\n");
	    scanf("%d", &num);
	     num1 = num1 % 10;
	     num2 = num - (num/10)*10;
	     printf("num (using modulas) = %d\n", num1);
	     printf("num (wihtout using modulus) = %d\n", num2);
	     return 0;
}
