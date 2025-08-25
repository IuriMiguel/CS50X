//Define libraries

#include <cs50.h>
#include <stdio.h>

/*
1. Crie uma variavel para receber o input do usuário
2. compare se o número digitado é um número, se não repita o processo
3. verifique se o número é par ou impar
4. responda se é par pu impar
*/

bool repeticao(void);

int main(void)
{
  bool continuar;
  int resposta;
  do
    {
      printf("versão 3\n");
      //Receive the input from the user
      resposta = get_int("digite um número: ");
      printf("O número digitado foi %i\n", resposta);

      //check if the input is pair or not
      if ((resposta % 2) == 0)
      {
        printf("O número é par\n");
      }
      else
      {
        printf("O número é impar\n");
      }
      
    continuar = repeticao();
        
    }
  while (continuar);
}

bool repeticao(void)
{
  char repetir;
  bool continuar = true;
  //Check if the user wants to continue
    do
      {
        repetir = get_char("Deseja continuar? [y/n] ");
        if (repetir == 'n' || repetir == 'N')
        {
          continuar= false;
        }
        else if (repetir != 'y' && repetir != 'Y' && repetir != 'n' && repetir != 'N')
        {
          printf("Escolha inválida. Por favor, escolha uma opção disponível\n");
        }
      }
    while (repetir != 'y' && repetir != 'n');
  return continuar;
}