/* @Author: Dhiren Jhugroo <dj434@bath.ac.uk>
 * @Date: 31/10/2020
 *
 * @Purpose: To produce the bits pattern of an integer to be displayed on 6 seven segment displays.
 *
 * The function IntegerToDisplay() takes an integer with a maximum of 6 digits as argument and writes its
 * corresponding bits pattern back to the 2 addresses pointed to by HEXA and HEXB. The bits pattern of the
 * least significant digit of the integer is stored in the least significant byte of HEXA.
 *
 */

#include <math.h>

void IntegerToDisplay(int integer, int* HEXA, int* HEXB)
{
	int digit;
	int displayPattern = 0;
	int i;

	for (i = 5; i >= 0; i--)
	{
		digit = (int)integer / pow(10, i);	/* Store the most significant digit of the integer */
		integer -= digit * pow(10, i);	/* Remove the most significant digit from the integer */

		DigitToDisplay(digit, &displayPattern);	/* Produce the display bits pattern of the current digit */

		if (i > 3)	/* Store the display bits pattern for digits 4 to 5 in HEXB */
		{
			/* Concatenate display bits pattern of current digit to the least significant byte of HEXB */
			*HEXB <<= 8;
			*HEXB |= displayPattern;
		}
		else  /* Store the display bits pattern for digits 0 to 3 in HEXA */
		{
			/* Concatenate display bits pattern of current digit to the least significant byte of HEXA */
			*HEXA <<= 8;
			*HEXA |= displayPattern;
		}
	}
}