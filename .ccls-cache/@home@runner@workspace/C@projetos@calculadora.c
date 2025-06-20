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

int calculadora(char operador, float x, float y);

int main(void)
{
  //escolha do operador
  do 
    {
      char operador = get_char("(+, -, *, /)\nEscolha a operação: ");
    }
  while (operador != ("+" || "-" || "*" || "/");
  
  //escolha dos números 
  /*float x = get_float("primeiro número: ");
  float y = get_float("Segundo número: ");
  float resposta = calculadora(operador, x, y);*/
}

/*
  int calculadora(char operador, float x, float y)
{
  do
    {
      if (operador == +)
      {
        return (x+y);
      }
    }
  while ()
}
*/