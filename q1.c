#include <stdio.h>
#define DATA 11

int validarFormatoEDigitos(const char *data) {
    int i = 0, etapa = 0;
    int digDia = 0, digMes = 0, digAno = 0;

    while (data[i] != '\0' && data[i] != '\n') {
        if (etapa == 0) {
            if (data[i] >= '0' && data[i] <= '9') digDia++;
            else if (data[i] == '/') etapa++;
            else return 0;
        }
        else if (etapa == 1) {
            if (data[i] >= '0' && data[i] <= '9') digMes++;
            else if (data[i] == '/') etapa++;
            else return 0;
        }
        else if (etapa == 2) {
            if (data[i] >= '0' && data[i] <= '9') digAno++;
            else return 0;
        }
        i++;
    }

    return (digDia >= 1 && digDia <= 2) &&
           (digMes >= 1 && digMes <= 2) &&
           (digAno == 2 || digAno == 4);
}


int validarData(int dia, int mes, int ano) {
    if(dia < 1 || dia > 31 || mes < 1 || mes > 12){
        return 0;
    }
    if(mes == 2) {
       int bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        if (bissexto && dia <= 29) return 1;
        else if (!bissexto && dia <= 28) return 1;
        else return 0;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return dia <= 30;
    }
    return dia <= 31;
}

int main() {
    char data[DATA];
    int dia, mes, ano;
    int resultado;
    
    printf("Informe uma data (dd/mm/aaaa):\n");
    fgets(data, DATA, stdin);
    
    int data2 = sscanf(data, "%d/%d/%d", &dia, &mes, &ano);
    
       if (!validarFormatoEDigitos(data)) {
        printf("0\n");
        return 0;
    }
    
     if (!validarData(dia, mes, ano)) {
        resultado = 0;
    } else {
        resultado = 1;
    }
    printf("%d", resultado);
}
