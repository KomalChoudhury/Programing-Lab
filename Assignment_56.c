#include<stdio.h>
int fib(int n){
if(n = 0){
	return 0;
}	
if(n = 1){
	return 1;
}
int fibn1 = fib(n - 1);
int fibn2 = fib(n - 2);
int fibN  = fibn1 + fibn2;
return fibN;
}


int main(){
	int a;
	printf("Enter a value : ");
	scanf("%d", &a);
	int result = fib(a);
	printf("The fibonacci number of %d is %d",a,result);
	return 0;
}
