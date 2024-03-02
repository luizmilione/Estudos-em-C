#include<stdio.h>
//Manipulação de arquivos é bem importante(e legal!)
//Para começar vamos declarar um ponteiro FILE *nome;
//Vamos então colocar um arquivo em nome usando fopen("nomeArquivo", "modo") modo = "a" Append (escreve no final do que já está lá). "w" Write (escreve do 0, destruindo o que ja estava lá), "r" Read (leitura do arquivo)

int main(){
    FILE *arquivo;
    arquivo = fopen("hello.txt", "r");
    char frase[50];
    while (fgets(frase, 50, arquivo) != NULL) //podemos usar fgets para ler uma string
    {
        printf("%s", frase);
    }    
    fclose(arquivo);

    //Vamos escrever e depois ler de um arquivo
    arquivo = fopen("comandos.txt", "w");
    printf("\nQual o seu nome?\n");
    fgets(frase, 50, stdin);
    fprintf(arquivo, "Seu nome é %s", frase); //Podemos usar fprintf para escrever no arquivo
    printf("Qual a sua idade?\n");
    int num;
    scanf("%d", &num);
    fprintf(arquivo, "%d", num); 
    fclose(arquivo);

    num = 0;
    frase[0] = '\0';

    arquivo = fopen("comandos.txt", "r");
    fgets(frase, 50, arquivo);
    printf("No arquivo, %s", frase);
    fscanf(arquivo, "%d", &num);
    printf("Sua idade é %d\n", num);
    fclose(arquivo);

    return 0;
}