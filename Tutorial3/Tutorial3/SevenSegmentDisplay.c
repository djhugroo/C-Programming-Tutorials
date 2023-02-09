/* @Author: Dhiren Jhugroo <dj434@bath.ac.uk>
 * @Date: 31/10/2020
 *
 * @Purpose: To display a digit on a seven segment display using its display bits pattern.
 *
 * The function SevenSegmentDisplay() takes the display bits pattern as only argument and
 * set the respective segment of the display to ON if the corresponding bit is set to 0.
 *
 */

#include <stdio.h>

void SevenSegmentDisplay(int displayPattern)
{
	int bit[8];
	int i;

	for (i = 0; i <= 6; i++)
	{
		bit[i] = displayPattern % 2;	/* Append the least significant bit of the display pattern to an array of bits */
		displayPattern >>= 1;	/* Remove the least significant bit */
	}

	/* Initialise all 7 segments of the display to OFF */
	char zero = ' ';
	char one = ' ';
	char two = ' ';
	char three = ' ';
	char four = ' ';
	char five = ' ';
	char six = ' ';

	/* Set the respective segment of the display to ON if the corresponding bit is set to 0 */
	if (bit[0] == 0)
		zero = '_';

	if (bit[1] == 0)
		one = '|';

	if (bit[2] == 0)
		two = '|';

	if (bit[3] == 0)
		three = '_';

	if (bit[4] == 0)
		four = '|';

	if (bit[5] == 0)
		five = '|';

	if (bit[6] == 0)
		six = '_';

	printf("\t %c\n\t%c%c%c\n\t%c%c%c\n",zero,five,six,one,four,three,two);	/* Display the seven segment display */
}