#include<stdio.h>
#include<string.h>

int main (){
    char str[] = "Ola mundo!";
    char str2[] = "Ola munda!";
    //Podemos usar a função strcmp(str1, str2); para comparar duas strings. Caso sejam iguais, retorna 0. Caso o primeiro caracter diferente seja menor retornará um valor menor que 0. Caso contrário, o contrário
    printf("Resultado: %d\n", strcmp(str, str2));

    //A função strcpy(str1, str2) irá copiar a string 2 e colocar em string 1.
    strcpy(str, str2);
    printf("str: %s\nstr2: %s\n", str, str2);
    //A função strncpy(str1, str2, int n) irá copiar apenas os primeiros n elementos de str2 para str1
    char str3[5];
    strncpy(str3, str2, 3);
    printf("str3: %s\n", str3);
    //Para funcionar corretamente, devemos adicionar o caracter fim de string manualmente, caso necessário
    str3[3] = '\0';
    printf("str3: %s\n", str3);

    //Outra função é strstr(str1, str2) onde a função procura a string str2 tentro de str1 e retorna um ponteiro para a primeira posição, se achar e null se não achar
    char needle[] = "munda";
    char *ptr = strstr(str, needle);
    printf("%s\n", ptr);

    //Uma função importante é a strtok(str1, delimitador) onde a função irá retornar um ponteiro para a função até achar o delimitador. A função pode ser chamada de novo com str1 sendo NULL e irá continuar usando str1 até o fim. Ao final retornará NULL. A função "corta" str1 ao substituir o delimitador com '\0'
    char frase[] = "Bom dia queridos amigos. Vamos aprender C?";
    char delimitador[] = " ";
    char *parte = strtok(frase, delimitador);
    while (parte != NULL)
    {
        printf("%s ", parte);
        parte = strtok(NULL, delimitador);
    }
    printf("\nComo a frase ficou na memoria: ");
    for (int i = 0; i < 43; i++)
    {
        if (frase[i] == '\0')
        {
            printf("\\0");
        } else {
            printf("%c", frase[i]);
        }
        
    }
    printf("\nfrase: %s\n", frase);
    

    return 0;
}