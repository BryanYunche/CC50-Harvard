#include <stdio.h>
#include <cs50.h>

//O program recriará uma piramide
//O usuário deverá escolher o tamanho da piramide entre 1 e 8 de altura
//O programa não aceita valores negativos, não aceita 0 e valores maiores que 8
//O usuário perguntará novamente a altura da pirâmide sempre que o usuário der uma entrada invalida

//Funções "resumidas"
int pega_altura(void);
void construir_piramide(int altura);


int main(void)
{

//int i = pega_altura();
//printf("%i\n", i);
construir_piramide(7);

}

//Funções do código

//Essa função recebe a altura e valida
int pega_altura(void)
{

    int n;

    do
    {
        
        n = get_int("Digite a altura desejada para a piramide: ");

    }while ((n < 1) || (n > 8));
    
    return n;

}

//Criação da pirâmide
void construir_piramide(int altura)
{
    int base = altura;
    //Linhas da tabela 
    for (int i = 0; i < altura; i++)
    {
        //Colunas da tabela
        for (int j = 0; j < base; j++)
        {
            if (i >= j)
            {
                printf("#");
            }else
            {
                printf("*");
            }
              
        }
        printf("\n");
        
    }
    
}