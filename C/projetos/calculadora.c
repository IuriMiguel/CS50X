// definir as bibliotecas 

#include <stdio.h>
#include <cs50.h>

//Declaração de função para receber o input e devolver um valor

/*
1. pergunte qual os números
2. pergunte qual o operador
3. se não for o operador aceitavels, volte ao inicio
4. crie uma função que execute uma operação de acordo com o operador e retorne o valor pela variável
*/


int main(void)
{
  float resultado;
  //escolha do operador
  float x = get_float("primeiro número: ");
  float y = get_float("segundo número: ");
  //escolha do operador
  char operador = get_char("(+, -, *, /) \noperador: ");
  if (operador == '+')
  {
    resultado = x + y;
    printf("Resultado: %f", resultado);
  }
  else if (operador == '-')
    {
      resultado = x - y;
      printf("Resultado: %f", resultado);
    }
  else if (operador == '*')
  {
    resultado = x * y;
    printf("Resultado: %f", resultado);
  }
  else if (operador == '/')
  {
    resultado = x / y;
    printf("Resultado: %f", resultado);
  }
  else
  {
    printf("selecione um operador aceitável.");
  }
}