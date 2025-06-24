
#include <stdio.h>
#include <cs50.h>

/*
1. ask for the user's length and weight
2. use the formula to get the user's IMC 
3. Show the user's IMC 
*/

bool repete(void);

int main(void)
{
  bool continuar;
  do 
    {
      printf("Versão 1\n");
      //Get the length and weight from the user
      float length = get_float("What's your length? ");
      float weight = get_float("What's your weight? ");

      if (length == 0.00)
      {
        printf("The length can't be zero. Please type a valid number");
      }
      else
      {
        float imc = weight / (length ^ 2);
      }
      
      continuar = repete();
    }
    while (continuar);
}

bool repete(void)
{
  char ask;
  bool continuar = true;
  //Check if the user wants to continue
    do
      {
        ask = get_char("Want to continue? [y/n] ");
        if (ask == 'n' || ask == 'N')
        {
          continuar= false;
        }
        else if (ask != 'y' && ask != 'Y' && ask != 'n' && ask != 'N')
        {
          printf("Invalid choice. Please, choose an avaliable option\n");
        }
      }
    while (ask != 'y' && ask != 'n');
  return continuar;
}