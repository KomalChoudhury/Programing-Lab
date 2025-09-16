#include <stdio.h>
int main() {
	int n, fac = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	for(int i = 1; i <=n; i++) {
	    fac = fac*i;
	}
	
	printf("Sum of the first %d natural numbers is: %d\n", n, fac);
	
	return 0;
}
