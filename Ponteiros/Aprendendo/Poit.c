#include<stdio.h>

int main(){
    int x = 10;
    int *ponteiroX = &x;

    float y = 20.5;
    float *ponteiroY = &y;

    float sum = x + y;
    float soma = *ponteiroX + *ponteiroY;

    printf("Somando sem ponteiros: %f\n", sum);
    printf("Somando com ponteiros: %f\n", soma);

    return 0;
}