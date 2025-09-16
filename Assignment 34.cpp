#include <stdio.h>
int main() {
	int n, i;
	int first = 0, second = 1, next;
	int sum = 0;
	
	printf ("Enter the number of terms in Fibonacci series: ");
	scanf("%d", &n);
	
	if (n <=0) {
	    printf ("Please enter a positive integer.\n");
                                   } 
	else 
	{
                                       printf("Fibonacci Series of %d terms: \n", n);
                                       for (i = 1; i <=n; i++) 
	    {
                                            printf("%d", first);
                                            sum += first;
                                            
                                            next = first + second;
                                            first = second;
                                            second = next;
	    }
	    
	    printf("\nSum of the series: %d\n", sum);
	    
	}
	  return 0;
	  
}
	
	
