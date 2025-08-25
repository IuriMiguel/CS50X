
#include <stdio.h>
#include <cs50.h>

/*
1. ask for the user's length and weight
2. use the formula to get the user's IMC 
3. Show the user's IMC 
*/

bool repete(void);
void imc_classification(float imc);

int main(void)
{
  bool continuar;
  do 
    {
      printf("Versão 4\n");
      //Get the length and weight from the user
      float height = get_float("What's your height [m]? ");
      float weight = get_float("What's your weight [kg]? ");

      //Look if the user inputed a valid length
      if (height <= 0.00 || weight <= 0.00)
      {
        printf("The height or weight must be greater than zero. Please type a valid number\n");
      }
      else
      {
        //calculate the user IMC and show it
        float imc = weight / (height * height);
        printf("Your IMC is: %.2f kg/m^2\n", imc);
        //Show how the IMC classification
        imc_classification(imc);
      }
      //Ask if the user wants to repeat the program
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
          printf("Invalid choice. Please, choose an available option\n");
        }
      }
    while (ask != 'y' && ask != 'n');
  return continuar;
}

void imc_classification(float imc)
{
  if (imc < 18.5)
    {
      printf("You are underweight\n");
    }
  else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("You have a normal weight\n");
    }
  else if (imc > 24.9 && imc <= 29.9)
    {
        printf("You are overweight\n");
    }
  else if (imc > 29.9 && imc <= 34.9)
    {
        printf("You have obesity class I\n");
    }
  else if (imc > 34.9 && imc < 40)
    {
        printf("You have obesity class II\n");
    }
  else if (imc >= 40)
    {
        printf("You have obesity class III\n");
    }
}