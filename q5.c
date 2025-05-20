#include <stdio.h>

int inverterNumero(int num) {
    int n1, n2, n3, n4;
    int resultado;
    if(num <= 9999 && num >= 1000) {
        n1 = num / 1000;
        n2 = (num / 100) % 10;
        n3 = (num / 10) % 10;
        n4 = num % 10;
        resultado = (n4*1000)+(n3*100)+(n2*10)+n1;
        return resultado;
    }
    if(num <= 999 && num >= 100) {
        n1 = num / 100;
        n2 = (num / 10) % 10;
        n3 = num % 10;
        resultado = (n3*100) + (n2*10) + n1;
        return resultado;
    } 
    if (num >= 10 && num <= 99) {
        n1 = num/10; //n1 = 5
        n2 = num% 10;
        resultado = (n2*10) + n1;
        return resultado;
}
}

int main() {
    int num;
    printf("Informe um número:\n");
    scanf("%d", &num);
    inverterNumero(num);
    printf("%d", inverterNumero(num));
}