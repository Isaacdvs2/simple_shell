#include "main.h"

/**
 * print_prompt1 - is a function to print the prompt string.
 * @void: function takes no args.
 *
 * Description: this function prints the first string which
 * is displayed when the shell is waiting for a command from
 * the user i.e the "$" sign infront of the username.
 * Return: void, returns no value.
 */

void print_prompt1(void)
{
	fprintf(stderr, "$");
}

/**
 * print_prompt2 - is a function that prints the second prompt string.
 * @void: takes no args.
 *
 * Description: prints the second prompt string which is usually displayed
 * when you enter a multiline command i.e the ">" symbol.
 */

void print_prompt2(void)
{
	fprintf(stderr, ">");
}
