#include <cs50.h>
#include <stdio.h>

void card(long cardnumber, int numberofdigits, int checksum);

int main(void)
{
    /*
    1. Prompt for input
    2. Calculate checksum
    3. Check card length and starting digits
    4. Print AMEX, MASTERCARD, VISA or INVALID
    */

    // A variable to store the user input
    long cardnumber;

    // A loop to keep asking for an valid input
    do
    {
        cardnumber = get_long("Number: ");
    }
    while (cardnumber <= 0);

    // Variables to verify the checksum and store the number of digits
    long check = cardnumber;
    int numberofdigits = 0;
    int digit = 0;
    int other_digit = 0;
    int a;

    while (check > 0)
    {
        digit += (check % 10);
        check /= 10;
        numberofdigits++;
        // Variable to store the other digits value before checking if it has two digits
        a = (check % 10) * 2;
        // Conditional in case "a" is a number of two digits
        if (a > 9)
        {
            other_digit += (a % 10);
            other_digit += (a / 10);
        }
        else
        {
            other_digit += a;
        }
        // Conditional to avoid increasing the number of digits too much
        if (check > 0)
        {
            check /= 10;
            numberofdigits++;
        }
    }

    // Variable to store the checksum
    int checksum = other_digit + digit;
    // Function to declare the credit card based on the card number and the number of digits
    card(cardnumber, numberofdigits, checksum);
}

void card(long cardnumber, int numberofdigits, int checksum)
{
    // Conditional to verify if the checksum is valid
    if (checksum % 10 == 0)
    {
        // Conditional to verify what is the companie of the card based on the card number of digits
        // and first numbers
        if (numberofdigits == 13)
        {
            int visa = cardnumber / 1000000000000;
            if (visa == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (numberofdigits == 15)
        {
            int amex = cardnumber / 10000000000000;
            if (amex == 34 || amex == 37)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (numberofdigits == 16)
        {
            int mastercard = cardnumber / 100000000000000;
            if (mastercard > 50 && mastercard < 56)
            {
                printf("MASTERCARD\n");
            }
            else if ((mastercard / 10) == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
