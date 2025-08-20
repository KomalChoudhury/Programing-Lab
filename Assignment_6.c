#include<stdio.h>
int main() {
	int p,r,t;
	float SI;
	printf("Enter your principal:");
	scanf("%d", &p);
	printf("Enter your rate:");
	scanf("%d", &r);
    printf("Enter your time:");
    scanf("%d", &t);
    SI=(p*r*t)/100;
    printf("Your simple intrest:%%.2f\n",SI);
    return 0;
}
