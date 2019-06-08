//computes a mathematical series after input from user
#include<stdio.h>
#include<math.h>
int main (void) {

	int i;
	int n;
	int S;
	int exp;
	int answer;
	S = 0;
//get input from user
	printf("Enter an integer number: ");
	scanf("%d", &n);

//calculate sum of series
	for(i = 1;i < n; i += 2) {
		S+= (i*i);
	}
	for(i = 2;i < n; i += 2) {
		S-= (i*i);
	}	

	exp = n + 1;
	answer = S + (pow(-1, exp) * (n*n));

	printf("The value of the series is: %d", answer);

	return 0;
}
