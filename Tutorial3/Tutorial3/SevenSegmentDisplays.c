/* @Author: Dhiren Jhugroo <dj434@bath.ac.uk>
 * @Date: 01/11/2020
 *
 * @Purpose: To display a six-digit integer on 6 seven segment displays using its display bits pattern, as on DE1-SoC.
 *
 * The function SevenSegmentDisplays() takes 2 display bits patterns as arguments and
 * set the respective segment of the displays to ON if the corresponding bit is set to 0.
 *
 */

#include <stdio.h>

void SevenSegmentDisplays(int HEXA,int HEXB)
{
	int bit1[32];
	int bit2[16];
	int i,j;

	for (i = 0; i <= 30; i++)
	{
		bit1[i] = HEXA % 2;	/* Append the least significant bit of the display pattern in HEXA to a first array of bits */
		HEXA >>= 1;	/* Remove the least significant bit in HEXA */
	}

	for (j = 0; j <= 14; j++)
	{
		bit2[j] = HEXB % 2;	/* Append the least significant bit of the display pattern in HEXB to a second array of bits */
		HEXB >>= 1;	/* Remove the least significant bit in HEXB */
	}

	/* Initialise all 7 segments of all 6 displays to OFF */
	char zero0 = ' ', zero1 = ' ', zero2 = ' ', zero3 = ' ', zero4 = ' ', zero5 = ' ';
	char one0 = ' ', one1 = ' ', one2 = ' ', one3 = ' ', one4 = ' ', one5 = ' ';
	char two0 = ' ', two1 = ' ', two2 = ' ', two3 = ' ', two4 = ' ', two5 = ' ';
	char three0 = ' ', three1 = ' ', three2 = ' ', three3 = ' ', three4 = ' ', three5 = ' ';
	char four0 = ' ', four1 = ' ', four2 = ' ', four3 = ' ', four4 = ' ', four5 = ' ';
	char five0 = ' ', five1 = ' ', five2 = ' ', five3 = ' ', five4 = ' ', five5 = ' ';
	char six0 = ' ', six1 = ' ', six2 = ' ', six3 = ' ', six4 = ' ', six5 = ' ';
	char space = ' ';

	/* Set the respective segment of the respective display to ON if the corresponding bit is set to 0 */
	if (bit1[0] == 0)
		zero0 = '_';

	if (bit1[1] == 0)
		one0 = '|';

	if (bit1[2] == 0)
		two0 = '|';

	if (bit1[3] == 0)
		three0 = '_';

	if (bit1[4] == 0)
		four0 = '|';

	if (bit1[5] == 0)
		five0 = '|';

	if (bit1[6] == 0)
		six0 = '_';

	if (bit1[8] == 0)
		zero1 = '_';

	if (bit1[9] == 0)
		one1 = '|';

	if (bit1[10] == 0)
		two1 = '|';

	if (bit1[11] == 0)
		three1 = '_';

	if (bit1[12] == 0)
		four1 = '|';

	if (bit1[13] == 0)
		five1 = '|';

	if (bit1[14] == 0)
		six1 = '_';

	if (bit1[16] == 0)
		zero2 = '_';

	if (bit1[17] == 0)
		one2 = '|';

	if (bit1[18] == 0)
		two2 = '|';

	if (bit1[19] == 0)
		three2 = '_';

	if (bit1[20] == 0)
		four2 = '|';

	if (bit1[21] == 0)
		five2 = '|';

	if (bit1[22] == 0)
		six2 = '_';

	if (bit1[24] == 0)
		zero3 = '_';

	if (bit1[25] == 0)
		one3 = '|';

	if (bit1[26] == 0)
		two3 = '|';

	if (bit1[27] == 0)
		three3 = '_';

	if (bit1[28] == 0)
		four3 = '|';

	if (bit1[29] == 0)
		five3 = '|';

	if (bit1[30] == 0)
		six3 = '_';

	if (bit2[0] == 0)
		zero4 = '_';

	if (bit2[1] == 0)
		one4 = '|';

	if (bit2[2] == 0)
		two4 = '|';

	if (bit2[3] == 0)
		three4 = '_';

	if (bit2[4] == 0)
		four4 = '|';

	if (bit2[5] == 0)
		five4 = '|';

	if (bit2[6] == 0)
		six4 = '_';

	if (bit2[8] == 0)
		zero5 = '_';

	if (bit2[9] == 0)
		one5 = '|';

	if (bit2[10] == 0)
		two5 = '|';

	if (bit2[11] == 0)
		three5 = '_';

	if (bit2[12] == 0)
		four5 = '|';

	if (bit2[13] == 0)
		five5 = '|';

	if (bit2[14] == 0)
		six5 = '_';

	/* Display the 6 seven segment displays */
	printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
		zero5, space, space, space, zero4, space, space, space, zero3, space, space, space, zero2, space, space, space, zero1, space, space, space, zero0, 
		five5, six5, one5, space, five4, six4, one4, space, five3, six3, one3, space, five2, six2, one2, space, five1, six1, one1, space, five0, six0, one0,
		four5, three5, two5, space, four4, three4, two4, space, four3, three3, two3, space, four2, three2, two2, space, four1, three1, two1, space, four0, three0, two0);
}