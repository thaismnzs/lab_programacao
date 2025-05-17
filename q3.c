#include <stdio.h>
#define TAM 250

int checarCase(char caractere) {
    if(caractere >= 65 && caractere <= 90) {
        return caractere + 32;
    } else {
        return caractere;
    }
}


int main(){
    
    char str[TAM];
    int contador=0;
    char caractere;
    
    printf("Informe uma string:\n");
    fgets(str, TAM, stdin);
    
    printf("Informe um caractere:\n");
    scanf("%c", &caractere);
    checarCase(caractere);
    
    
     for (int i = 0; str[i] != '\0'; i++) {
        if (checarCase(str[i]) == caractere) {
            contador++;
        }
    }
    
    printf("%d ocorrências.", contador);
    
}