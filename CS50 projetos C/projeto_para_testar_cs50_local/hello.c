#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nome = get_string("Digite seu nome: ");
    printf("Hello, %s", nome);
}

//Como executar um programa com o CS50?
//Lembrando que o arquivo cs50.c tem que estar na pasta do projeto
//basta digitar: gcc -o (nome do arquivo) (nome do arquico que vai ser compilado) cs50.c 