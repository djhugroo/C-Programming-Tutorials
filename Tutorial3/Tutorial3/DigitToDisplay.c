/* @Author: Dhiren Jhugroo <dj434@bath.ac.uk>
 * @Date: 31/10/2020
 *
 * @Purpose: To produce the bits pattern of the digit to be displayed on a seven segment display.
 *
 * The function DigitToDisplay() takes a digit in the range 0 to 9 as argument and writes its
 * corresponding bits pattern back to the address pointed to by displayPattern.
 *
 */

void DigitToDisplay(int digit, int* displayPattern)
{
	switch (digit)
	{
	case 0:
		*displayPattern = 64;	/* 1000000 */
		break;
	case 1:
		*displayPattern = 121;	/* 1111001 */
		break;
	case 2:
		*displayPattern = 36;	/* 0100100 */
		break;
	case 3:
		*displayPattern = 48;	/* 0110000 */
		break;
	case 4:
		*displayPattern = 25;	/* 0011001 */
		break;
	case 5:
		*displayPattern = 18;	/* 0010010 */
		break;
	case 6:
		*displayPattern = 2;	/* 0000010 */
		break;
	case 7:
		*displayPattern = 120;	/* 1111000 */
		break;
	case 8:
		*displayPattern = 0;	/* 0000000 */
		break;
	case 9:
		*displayPattern = 16;	/* 0010000 */
		break;
	default:
		*displayPattern = 127;	/* 1111111 */
	}
}