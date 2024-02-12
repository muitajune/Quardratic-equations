#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	float a, b, c, r1, r2, d1, d2;
	printf("Enter the coefficient a b and c:");
	scanf("%f\n%f\n%f", &a, &b, &c);
	d1=-b+sqrt(b*b-4*a*c);
	d2=-b-sqrt(b*b-4*a*c);
	r1=d1/(2*a);
	r2=d2/(2*a);
	printf("The real values =%f\n%f", r1, r2);
	return 0;
}