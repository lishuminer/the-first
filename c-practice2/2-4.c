#include <stdio.h>

int main(void)
{
	int    n1, n2, n3, n4;	
	double d1, d2, d3, d4;	

	n1 = 10;	
	n2 = 20;	
	n3 = 5;	
	n4 = 40;	

	d1 = 5.5;			
	d2 = 5.0;		
	d3 = 10.0;		
	d4 = 2.50;		

	printf("n1 = %d\n", n1 / d2);
	printf("n4 = %d\n\n", n4 / d4);

	printf("d2 = %f\n", n3 / d4);
	printf("d4 = %f\n", d3 / n3);

	return 0;
}
