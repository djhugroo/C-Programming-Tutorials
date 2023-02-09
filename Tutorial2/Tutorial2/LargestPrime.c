/* @Author: Dhiren Jhugroo <dj434@bath.ac.uk>
 * @Date: 22/10/2020
 *
 * @Purpose: To read a single value from the user and report back the largest prime number less than the input value.
 *
 * This program prompts a user to enter a positive integer number until the latter is input. The validated input number
 * is then decremented by 1 until found to be a prime number, by passing the number as an argument to the function IsPrime().
 * The resulting value of the input number is then displayed as the largest prime number less than the input value.
 *
 */

#include <stdio.h>
#include <stdbool.h>

void main()
{
	int number;	/* Positive integer number to be input by user */

	bool correct;	/* Boolean which is TRUE if input is valid */

	char c;

	/* Check for poor input until valid */
	do
	{
		correct = 1;

		number = 0;	/* Reset input number */

		printf("\n\tPlease enter a positive integer number: ");	/* Prompt user to type in a positive integer number */

		while ((c = getchar()) != '\n')	/* Read new input character until ENTER is pressed */
		{
			if (c >= 48 && c <= 57)	/* Check if character is a digit in the range 0 to 9 */
			{
				if (correct)
				{
					/* Append digit to the least significant digit of the number */
					number *= 10;
					number += (c - 48);
				}
			}
			else
			{
				correct = 0;	/* Force data re-entry */
			}
		}

		if(!correct)
			printf("\n\tERROR: Input does not contain only a positive integer\n");	/* Display ERROR message */

	} while (!correct);

	do number--; while (!IsPrime(number));	/* Decrement input number by 1 until found to be Prime (exclude input value) */

	printf("\n\tThe largest prime number is %d\n", number);	/* Display the largest prime number */

	printf("\n\tWash your hands.\tPractice social distancing.\tStay safe.\n");	/* EXTRA: Display COVID-19 Precautions */
}