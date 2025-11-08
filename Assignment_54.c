#include<stdio.h>
int sum(){
int i,sum = 0;
for(i=1; i<=10; i++){
	sum = sum+(2*i);
}
	return sum;
}
int main(){
	int result;
	result = sum();
	printf("The sum of first  even natural number is %d",result);
	return 0;
}
