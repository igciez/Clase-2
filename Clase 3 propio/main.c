#include <stdio.h>
#include <stdlib.h>
int sumaEnteros (int numeroUno, int numeroDos, float *resultadoMarca);
int restaEnteros (int numeroUno, int numeroDos,float *resultadoMarca);
int multiplicaEnteros (int numeroUno, int numeroDos, float *resultadoMarca);
int divisionEnteros (int numeroUno, int numeroDos, float *resultadoMarca);

int main()
{
    int numeroUno;
    int numeroDos;
    char operadores;
    float total;
    int retorno;


    printf("Elija que operacion quiere realizar:\nSuma (+),\nResta (-),\nDivision (/) o\nMultiplicacion (*)\n");
    scanf("%c",&operadores);
    printf("Escriba su primer Numero: ");
    scanf("%d",&numeroUno);
    printf("\nEscriba su segundo Numero: ");
    scanf("%d",&numeroDos);


switch(operadores){

    case '+':
        retorno=sumaEnteros(numeroUno,numeroDos,&total);
        if(retorno==0){
            printf("El resultado de la suma es: %.2f",total);
        }
        else{
            printf("\nError, suma superior a 37699");
        }
        break;

    case '-':
        retorno=restaEnteros(numeroUno, numeroDos,&total);
        if(retorno==0){
            printf("El resultado de la resta es: %.2f",total);
        }
        else{
            printf("Error, resta superior a 37699");
        }
        break;
    case '*':
        retorno=multiplicaEnteros( numeroUno, numeroDos,&total);
        if (retorno==0){
            printf("El resultado de la multiplicacion es: %.2f", total);
        }
        else{
            printf("Error, multiplicacion superior a 37699");
        }
        break;
    case '/':
        retorno=divisionEnteros(numeroUno, numeroDos, &total);
        if(retorno==0){
            printf("El resultado de la division es: %.2f",total);
        }
        else {
            printf("Error, division superior a 37699, o segundo numero es cero.");
        }
        break;

    }



    return 0;
}

int sumaEnteros(int numeroUno, int numeroDos,float* resultadoMarca){
    long resultado;
    int retorno=-1;
    resultado=numeroUno+numeroDos;
    if(resultado<37692){
        *resultadoMarca=resultado;
        retorno= 0;

    }
    return retorno;
}
int restaEnteros (int numeroUno, int numeroDos,float *resultadoMarca){
    long resultado;
    int retorno=-1;
    resultado=numeroUno-numeroDos;
    if(resultado<37699){
        *resultadoMarca=resultado;
        retorno=0;
    }
    return retorno;
}
int multiplicaEnteros (int numeroUno, int numeroDos, float *resultadoMarca) {
    int retorno;
    long resultado;
    resultado=numeroUno*numeroDos;
    if(resultado<37699){
        *resultadoMarca=resultado;
        retorno=0;
    }
return retorno;
}
int divisionEnteros (int numeroUno, int numeroDos, float *resultadoMarca){
    long resultado;
    int retorno;
    retorno=-1;
    if(resultado<37699&&numeroDos!=0){
        resultado=numeroUno/numeroDos;
        *resultadoMarca=resultado;
        retorno=0;
    }
    return retorno;

}

