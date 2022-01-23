#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character :");
	scanf_s("%c", &c);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		printf("%c is an Alphabet.", c);
	}
	else
	{
		printf("%c is not an alphabet.", c);
	}
	return 0;
}
/*
#include<stdio.h>
#include <ctype.h>
int main()
{
	char c;
	printf("Enter a character : ");
	scanf_s("%c", &c);
	if (isalpha(c))
	{
		printf("%c is a Alphabet.");
	}
	else
	{
		printf("%c is not a Alphabet");
	}
	return 0;
}
*/
/*The ASCII value of the lowercase alphabet is from 97 to 122.
And, the ASCII value of the uppercase alphabet is from 65 to 90.*/
