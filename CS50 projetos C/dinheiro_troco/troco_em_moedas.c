#include <stdio.h>
#include <cs50.h>
#include <math.h>

//O programa deve pedir um numero float do usuário
//O programa deve onverter esse número para inteiro
//O programa deve retornar quantas moedas ele utilizou para dar de troco

//Funções pro código funcionar
int troco_convertido(float troco);
int calcula_moedas(int troco);

int main(void){
    int trocoInt = troco_convertido(0.30f);

    printf("%i\n", trocoInt);
    printf("%i\n", calcula_moedas(trocoInt));
}

int troco_convertido(float troco){
    int valor_convertido = round(troco * 100);
    return valor_convertido;
}

int calcula_moedas(int troco){
    int resto;
    int moedaVinteCinco = 25;
    resto = troco%moedaVinteCinco;
    return resto;
}

