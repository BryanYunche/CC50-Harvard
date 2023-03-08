#include <stdio.h>
#include <cs50.h>

//O program recriará uma piramide dupla
//O usuário deverá escolher o tamanho da piramide entre 1 e 8 de altura
//O programa não aceita valores negativos, não aceita 0 e valores maiores que 8
//O usuário perguntará novamente a altura da pirâmide sempre que o usuário der uma entrada invalida

//Funções "resumidas"
int pega_altura(void);
void construir_piramide_dupla(int medida);


int main(void)
{

int i = pega_altura();
construir_piramide_dupla(i);

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
void construir_piramide_dupla(int medida)
{
int linha, coluna, espaco, dimensao;
dimensao = medida;

//Itera as linhas
for (linha = 1; linha <= dimensao; linha++)
{
    //A impressão dos espaços em branco são feitos pela seguinte lógica
    //A cada linha é subtraido o número de linhas da dimensão, assim será impresso
    //espaços em branco de acordo com qual linha está
    for (coluna = dimensao - linha; coluna >= 1  ; coluna--)
    {
        printf(" ");
    }
    
    for (coluna = 1; coluna <= linha ; coluna++)
    {
       printf("#");
    }
    
    printf(" ");
    
    for (coluna = 1; coluna <= linha ; coluna++)
    {
       printf("#");
    }
    printf("\n");
}
}
