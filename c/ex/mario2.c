#include <stdio.h>
#include <cs50.h>

void block_build(int);

int main(void)
{
  printf("ver. 3\n");
  int rows;
  //prompt user for number of rows
  do
    {
      rows = get_int("How many rows? ");
    }
  while (rows < 1);

  block_build(rows);
  
}

void block_build(int space)
{
  int rows = space;
  int bricks = 1;
  //print the number of rows
  for (int counter = 0; counter < rows; counter++)
  {
    //print the number of Spaces requires to each row
    for (int c = space - 1; c > 0; c--)
       {
         printf(" ");
       }
    //print the number of bricks requires to each row
    for (int i = 0; i < bricks; i++)
      {
        printf("#");
      }

    printf(" ");

    for (int i = 0; i < bricks; i++)
      {
        printf("#");
      }
    space--;
    bricks++;
    printf("\n");
  }
}