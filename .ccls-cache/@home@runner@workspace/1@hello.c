// get_string and printif com o placeholder incorreto 

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string resposta = get_string("Qual é o seu nome?\n");
  printf("olá, %s\n");
}