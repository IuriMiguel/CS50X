#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Set the change owed to the client
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);

    // Set the number of coins needed to give the change owed to the user
    int coins = 0;

    // Conditional that define how many coins are required for the change
    while (change > 0)
    {
        if (change - 25 >= 0)
        {
            change -= 25;
        }
        else if (change - 10 >= 0)
        {
            change -= 10;
        }
        else if (change - 5 >= 0)
        {
            change -= 5;
        }
        else if (change - 1 >= 0)
        {
            change -= 1;
        }
        coins++;
    }

    // Print the number of coins needed to give the change to the client
    printf("%i\n", coins);
}
