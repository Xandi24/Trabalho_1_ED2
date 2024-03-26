/*
Alunos [No USP]: 
Vitor Alexandre Garcia Vaz [14611432]
Vitor Pardini Saconi [14611800]
*/

#include <stdlib.h>
#include <stdio.h>

int* my_bubble_sort(vetor, tamanho)
int *vetor; int tamanho;
{
    //Flag que sinaliza 1 enquanto o vetor não está ordenado.
    int flag=1;

    //Auxiliar usado para trocas de valores entre elementos do vetor.
    int aux=0;
    
    while(flag)
    {
        /* 
            Se nao houver troca, a flag continua zerada, sinalizando 
            que o vetor está ordenado.
        */
        flag=0;

        for(int i=0;i<(tamanho-1);i++)
        {
            if(vetor[i]>vetor[i+1])
            {
                /* 
                Se o elemento atual for maior que o proximo elemento, os valores 
                entre eles são trocados e a flag continua igual a um, ou seja, 
                houve troca de valores e o vetor ainda não esta ordenado crescentemente.
                */
                aux=vetor[i+1];
                vetor[i+1]=vetor[i];
                vetor[i]=aux;
                flag=1;
            }
        }
    }
    
    return vetor;
}


int main()
{
    // Recebimento da quantidade de elementos do vetor que será ordenado.
    int a=0;
    scanf("%d\n",&a);

    // Aloca um vetor com a quantidade de elementos informada.
    int* vetor=NULL;
    vetor=calloc(a, sizeof(int));  

    // Recebimento dos elementos do vetor.
    for(int i=0;i<a;i++){
        scanf("%d",&vetor[i]);
    }

    // Ordena o vetor por meio do algoritmo bubble sort.
    vetor=my_bubble_sort(vetor,a);

    // Imprime o vetor ordenado.
    for(int i=0;i<a;i++){
        printf("%d ",vetor[i]);
    }
    
    return 0;
}
