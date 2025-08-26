#include <stdio.h>
#include <math.h>
int main(){
  floata,b,c,d,root1,root2;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b*b - 4*a*c;
    root1 = (-b + sqrty (d)) / (2*a);
    root2 = (-b - sqrt(d)) / (2*a);

    printf("Root = %.2f\n", root1);
    printf("Root = %.2f\n", root2);
    return 0;
}





