#include <stdio.h>
//Autor: Eliel Jos� de Souza Fran�oso
//N_USP: 12550261
//Informando dois valores a e b, inverter os valores de ambos
int main(){
    //declarando variaveis
    int a, b, aux=0;

        //Escrevendo e lendo vari�veis
        printf("Informe os valores de a e b respectivamente: \n");
        scanf("%d %d", &a, &b);

            /*Processamento: a vari�vel a recebe b e a vari�vel b recebe a,
            mas como "a" j� recebeu b, � necess�rio uma vari�vel auxiliar(aux) recebendo o valor de a, para atribuir a b*/
            aux = a;
            a=b;
            b=aux;

        //imprimindo o resultado final
        printf("a = %d; b = %d", a, b);

    return 0;

}
