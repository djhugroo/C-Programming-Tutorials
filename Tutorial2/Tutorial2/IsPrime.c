/* @Author: Dhiren Jhugroo <dj434@bath.ac.uk>
 * @Date: 22/10/2020
 * 
 * @Purpose: To determine if a number is prime.
 * 
 * The function IsPrime(X) takes a positive integer number X as only argument and returns: 
 * 1 if X is a prime number;
 * 0 if X is NOT a prime number.
 * 
 */

#include <stdbool.h>
#include <math.h>

int IsPrime(int number)
{
	bool prime;	/* Boolean which is TRUE if number is prime */

	if (number < 2)	/* Check for special case 1: 0 AND 1 are not prime */
		prime = 0;

	else if (number == 2)	/* Check for special case 2: 2 is the only even prime number */
		prime = 1;

	else if (number % 2 == 0)	/* Check for even number */
		prime = 0;

	else
	{
		int root = (int)sqrt(number);
		int divisor;

		prime = 1;	/* Set boolean temporarily to TRUE until disproved */

		/* Divide the input X by odd numbers greater than 1, until the square root of X */
		for (divisor = 3; divisor <= root; divisor += 2)
		{
			if (number % divisor == 0)	/* Check for a factor of input X */
			{
				prime = 0;
				break;
			}
		}
	}
	return prime;
}