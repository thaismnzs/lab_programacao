#include <stdio.h>
#include <string.h>
#define MAX_NUM 50

void inverterString(char *num) {
    int inicio = 0;
    int fim = strlen(num) - 1;
    char temp;

    while (inicio < fim) {
        temp = num[inicio];
        num[inicio] = num[fim];
        num[fim] = temp;

        inicio++;
        fim--;
    }
}

int main(){
    char num[MAX_NUM];
    
    printf("Informe um número:\n");
    fgets(num, MAX_NUM, stdin);
    
    inverterString(num);
    printf("%s", num);
}
