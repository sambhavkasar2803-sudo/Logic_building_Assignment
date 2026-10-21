//Identify Character Type

#include <stdio.h>
#include <ctype.h>

void CheckCharacterType(char cValue)
{
    if (isupper((unsigned char)cValue))
    {
        printf("Uppercase Alphabet\n");
    }
    else if (islower((unsigned char)cValue))
    {
        printf("Lowercase Alphabet\n");
    }
    else if (isdigit((unsigned char)cValue))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return 0;
}