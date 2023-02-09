/* @Author: Dhiren Jhugroo <dj434@bath.ac.uk>
 * @Date: 01/11/2020
 *
 * @Purpose: To read 2 integers from 10 switches configuration; calculate their sum; and produce their bits pattern.
 *
 * The function AdditionToDisplay() takes a series of 10 bits as argument, extracts a first two-digit integer from
 * the first 5 bits and a second two-digit integer from the last 5 bits, calculates the sum of the two integers, and
 * writes their corresponding bits pattern back to the 2 addresses pointed to by HEXA and HEXB.
 *
 */

void AdditionToDisplay(int switchConfig, int* HEXA, int* HEXB)
{
	int addend0 = switchConfig & 31;	/* Extract the second integer */
	int addend1 = switchConfig >> 5;	/* Extract the first integer */

	int sum = addend0 + addend1;

	int integerDisplay = (addend1 * 10000) + (addend0 * 100) + sum;	/* Concatenate the 3 two-digit integers into 1 six-digit integer */

	IntegerToDisplay(integerDisplay, &*HEXA, &*HEXB);	/* Produce the display bits pattern of the integer */
}