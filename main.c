#include <stdio.h>
#include <ctype.h>

int main()
{
char character;
printf("Press any key\n");
character = getchar();
(isalpha(character) > 0)?
printf("The character is a Letter.\n"):(isdigit (character) > 0)?
printf("The character is a Digit.\n"):printf("The character is not Alphanumeric.");
}
