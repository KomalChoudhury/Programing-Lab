#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a and b");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("The value before change : %d, %d", a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value after change : %d, %d", a,b);
	return 0;
}
