#include <stdio.h>
#include <ctype.h>

void toMaiuscula (char *inicio);

int main(){
    printf("Digite no máximo 99 caracteres:\n");
    char string[100];
    fgets(string, 99, stdin);
    toMaiuscula(string);

    printf("Nova String:\n%s\n", string);

    return 0;
}

void toMaiuscula(char *inicio){
    for (char *i = inicio; *i != '\0'; i++){
        if(islower(*i)){
            *i = toupper(*i);
        }
    }
}