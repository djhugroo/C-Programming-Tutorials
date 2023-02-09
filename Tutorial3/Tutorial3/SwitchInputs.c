/* @Author: Dhiren Jhugroo <dj434@bath.ac.uk>
 * @Date: 02/11/2020
 *
 * @Purpose: To prompt the user to enter 10 bits which represent the configuration of the 10 switches on the DE1-SoC.
 *
 * The function SwitchInputs() prompts the user to input 10 bits by entering a series of 0 and 1 characters,
 * and converts the string of characters to its equivalent binary value.
 * The value is written back to the address pointed by switchConfig.
 *
 */

#include <stdio.h>

void SwitchInputs(int* switchConfig)
{
	*switchConfig = 0;
	char c;

	printf("\n\tSwitch: 1->ON & 0->OFF          [10  bits]\n");

	printf("\n\tEnter the switch configuration: ");

	while ((c = getchar()) != '\n')	/* Read new character until ENTER is pressed */
	{ 
		/* Append input bit to the least significant bit of *switchConfig */
		*switchConfig <<= 1;
		*switchConfig += (c - '0') & 1;	/* Convert input binary from Symbol equivalent to Decimal equivalent */
	}
}