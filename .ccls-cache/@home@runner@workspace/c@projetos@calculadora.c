// Definição das bibliotecas 

#include <stdio.h>
#include <cs50.h>

//Declaração de função para receber o input e devolver um valor

/*
1. pergunte qual os números
2. pergunte qual o operador
3. se não for o operador aceitavels, volte ao inicio
4. crie uma função que execute uma operação de acordo com o operador e retorne o valor pela variável
*/

float operacao(char op, float x, float y);

int main(void)
{
  float resultado;
  char op;
  char repetir;
  bool continuar = true;

  do
    {
      printf("versão 6\n");
      
      //Take the input from the users
      float x = get_float("primeiro número: ");
      float y = get_float("segundo número: ");
      
      //Choice of the operator
      do
        {
          op = get_char("(+, -, *, /) \noperador: ");
          if (op != '+' && op != '-' && op != '*' && op != '/')
            {
              printf("Operador inválido. Tente novamente\n");
            }
        }
      while (op != '+' && op != '-' && op != '*' && op != '/');
    
      //Execution of the operation and receiving of the result
      resultado = operacao(op, x, y);
      //Show the result
      printf("Resultado: %.2f\n", resultado);
        
      do
        {
          repetir = get_char("Deseja fazer mais um cálculo? [y/n] ");
          if (repetir == 'n')
          {
            continuar = false;
          }
          if (repetir != 'y' && repetir != 'n')
          {
            printf("Opção inválida, tente novamente, por favor\n");
          }
        }
      while (repetir != 'y' && repetir != 'n');
      
    }
    while (continuar);
}

float operacao(char op, float x, float y)
{
  //Execution of the operation based on the chosen operator
  if (op == '+')
    {
      return x + y;
    }
    else if (op == '-')
      {
        return x - y;
      }
    else if (op == '*')
    {
      return x * y;
    }
    else if (op == '/')
    {
      if (y == 0)
      {
      printf("Não é possível dividir por 0. Tente outro número\n");
      return 0;
      }
      return x / y;    
    }
    else
    {
      printf("Operação inválida. Tente novamente\n");
      return 0;
    }
}