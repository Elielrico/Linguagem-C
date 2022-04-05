#include <stdio.h>
//Autor: Eliel José de Souza Françoso
//N_USP: 12550261
//Calcular a área de um quadrado
int main(){
    //Declarando variáveis do tipo inteiro
    int l, area;

        //Escrevendo e lendo variáveis
        printf("Informe o valor do lado do quadrado: \n");
        scanf("%d", &l);

            //Formula para calcular area
            area = l*l;

        //Imprimindo o resultado final
        printf("Area do quadrado: %d", area);

    return 0;

}
