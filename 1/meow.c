//return valie

#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);
void meow(int n);

int main (void)
{
    int n = get_positive_int();
    meow(n);
}

int get_positive_int(void)
{
    int n;
    do
    {
       int n = get_int("Number: ");
    }
    while (n < 1);
    return n;
}
//meow some times
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}