#include "main.h"
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase
 * Return: always 0
 */
void printAlphabet() 
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
int main()
{
	printAlphabet();
	return (0);
}
