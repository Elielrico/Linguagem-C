#include <stdio.h>
//Autor: Eliel Jos� de Souza Fran�oso
//N_USP: 12550261
//Calcular a �rea de um quadrado
int main(){
    //Declarando vari�veis do tipo inteiro
    int l, area;

        //Escrevendo e lendo vari�veis
        printf("Informe o valor do lado do quadrado: \n");
        scanf("%d", &l);

            //Formula para calcular area
            area = l*l;

        //Imprimindo o resultado final
        printf("Area do quadrado: %d", area);

    return 0;

}
