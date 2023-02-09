/* @Author: Dhiren Jhugroo <dj434@bath.ac.uk>
 * @Date: 31/10/2020
 *
 * @Purpose: Tutorial 3 for EE30186
 *
 * Uncomment the underlying statements to run the code for the desired ACTIVITY.
 * Comment the underlying statements NOT to run the code for undesired ACTIVITIES.
 *
 */

#include <stdio.h>

int main()
{
	while (1)
	{
		int ALT_LWFPGA_SWITCH_BASE;	/* Switch input port [SW9 to SW0] */
		int ALT_LWFPGA_HEXA_BASE = 0;	/* Display output port [HEX3 to HEX0] */
		int ALT_LWFPGA_HEXB_BASE = 0;	/* Display output port [HEX5 to HEX4] */



		/* ACTIVITY 1 */

		//printf("\n\tPlease enter a digit in the range 0 to 9: ");

		//scanf_s("%d", &ALT_LWFPGA_SWITCH_BASE);

		///* Produce display bits pattern for digit */
		//DigitToDisplay(ALT_LWFPGA_SWITCH_BASE, &ALT_LWFPGA_HEXA_BASE);

		///* Display digit on a seven segment display using the display bits pattern */
		//SevenSegmentDisplay(ALT_LWFPGA_HEXA_BASE);



		/* ACTIVITY 2 */

		//printf("\n\tPlease enter an integer with maximum 6 digits: ");

		//scanf_s("%d", &ALT_LWFPGA_SWITCH_BASE);

		///* Produce display bits patterns for integer */
		//IntegerToDisplay(ALT_LWFPGA_SWITCH_BASE, &ALT_LWFPGA_HEXA_BASE, &ALT_LWFPGA_HEXB_BASE);

		///* Display integers on 6 seven segment displays using the display bits patterns */
		//SevenSegmentDisplays(ALT_LWFPGA_HEXA_BASE, ALT_LWFPGA_HEXB_BASE);



		/* ACTIVITY 3 */

		/* Read switches configuration in the form of bits from user*/
		SwitchInputs(&ALT_LWFPGA_SWITCH_BASE);

		/* Read 2 two-digit integers from switches input; calculate their sum; produce their display bits patterns */
		AdditionToDisplay(ALT_LWFPGA_SWITCH_BASE, &ALT_LWFPGA_HEXA_BASE, &ALT_LWFPGA_HEXB_BASE);

		/* Display integers on 6 seven segment displays using the display bits patterns */
		SevenSegmentDisplays(ALT_LWFPGA_HEXA_BASE, ALT_LWFPGA_HEXB_BASE);
	}
	
}