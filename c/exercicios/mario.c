// Prints a 5-by-5 grid of bricks with nested loops using a constant

#include <stdio.h>

void print_row(int width);

int main(void)
{
    int n = 5;
    for (int i=0; i<n; i++)
    {
        print_row(n);
    }
}

void print_row(int width)
{
    for (int j=0; j<width; j++)
        {
            printf("#");
        }
        printf("\n");
}