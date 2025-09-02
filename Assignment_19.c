#include<stdio.h>
int main(){
	int coin;
	printf("Enter 0 for head and 1 for tail: ");
	scanf("%d", &coin);
	if(coin == 0){
		printf("Head");
	}
	else(coin == 1){
		printf("Tail");
	} 
	return 0;
}
