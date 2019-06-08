//guess square root of a number
#include<stdio.h>
#include<math.h>
int main (void) {

	double num;
	double guess = 1.0f;
	double value;
	
	//user input
	printf("Enter a number: ");
	scanf("%lf", &num);

	//loop
	
	while(fabs(guess * guess - num) > .00005) {
		printf("%.5lf\n", guess);
		guess = (guess + (num / guess)) / 2.0f;
	}
	
	//print
	printf("Estimated square root of %lf: %.5lf ", num, guess);
	
	return 0;

}
