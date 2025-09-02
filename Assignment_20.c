#include<stdio.h>
int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if(a > 0){
		printf("Whole number");
	}
	else{
		printf("Not a whole number");
	}
	return 0;
}
