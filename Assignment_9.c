#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a and b");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("The value before change : %d, %d", a,b);
	c=a;
	a=b;
	b=c;
	printf("The value after change : %d, %d", a,b);
	return 0;
	
}
