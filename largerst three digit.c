#include <stdio.h>

int findGreatestThreeDigitNumber(int number)
{
    int greatestThreeDigitNumber = -1;

    while (number > 0)
    {
        int digit = number % 100;

        if (digit > greatestThreeDigitNumber && digit < 100)
        {
            greatestThreeDigitNumber = digit;
        }

        number /= 10;
    }

    return greatestThreeDigitNumber;
}

int main()
{
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    int result = findGreatestThreeDigitNumber(input);

    if (result == -1)
    {
        printf("No three-digit number found in the input.\n");
    } else
    {
        printf("The greatest three-digit number is: %d\n", result);
    }

    return 0;
}
