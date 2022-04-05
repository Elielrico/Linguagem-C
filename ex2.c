#include <stdio.h>
//Autor: Eliel José de Souza Françoso
//N_USP: 12550261
//Informando dois valores a e b, inverter os valores de ambos
int main(){
    //declarando variaveis
    int a, b, aux=0;

        //Escrevendo e lendo variáveis
        printf("Informe os valores de a e b respectivamente: \n");
        scanf("%d %d", &a, &b);

            /*Processamento: a variável a recebe b e a variável b recebe a,
            mas como "a" já recebeu b, é necessário uma variável auxiliar(aux) recebendo o valor de a, para atribuir a b*/
            aux = a;
            a=b;
            b=aux;

        //imprimindo o resultado final
        printf("a = %d; b = %d", a, b);

    return 0;

}
