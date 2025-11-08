#include<stdio.h>
int GCD(int a, int b){
	if(b == 0){
		return a;
	}
	else{
		return GCD(b,a % b);
	}
}
 int main(){
 	int x,y;
 	printf("Enter two value : ");
 	scanf("%d %d", &x,&y);
 	int result = GCD( x, y);
 	printf("The GCD of %d and %d   is %d", x,y,result);
 	return 0;
 }
