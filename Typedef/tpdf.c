#include<stdio.h>
//Podemos usar typedef para "substituir uma palavra por outra"

typedef int distancia;

int main(){
    distancia escola = 10, trabalho = 5;
    printf("Os inteiros são %d, %d e a soma é %d\n", trabalho, escola, trabalho+escola);
    
    return 0;
}