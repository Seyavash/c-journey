#include <stdio.h>

int main()
{
	float _num1;
	printf ("Please Enter a number :");
	scanf("%f", &_num1);
	
	if (_num1 > 0){
		printf(" %f is a positive number",_num1);
		
		}
	else if (_num1 < 0){
		printf( "%f is a negative number" ,_num1);
	} 
		else {
			printf ("%f is zero", _num1);
		}
	
	return 0;
}