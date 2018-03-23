#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS 3

//describir la funcion: tipo que devuelve; el nombre; lo que recibe. y luego las {llaves.
 void imprimirMensaje (int n){
     printf("Ingrese el numero %d:",n+1);
 }

int main()
{
    int i;
    int numeroUsuario;
    int acumulador = 0;
    float resultado;
    int numeromaximo;
    int numeroMinimo;
    for(i=0 ; i < CANTIDAD_NUMEROS ; i++)
    {
        //comentario
        //printf("Dame el Numero %d\n",i+1);
        imprimirMensaje(i);
        scanf("%d",&numeroUsuario);
        acumulador = acumulador + numeroUsuario;
        if(i==0)
        {
            numeromaximo=numeroUsuario;
            numeroMinimo=numeroUsuario;
        }
        else
        {
            if(numeroUsuario>numeromaximo)
            {
                numeromaximo=numeroUsuario;
            }
            else if(numeroUsuario<numeroMinimo)
            {
                numeroMinimo=numeroUsuario;
            }
        }
    }
    resultado = (float)acumulador / CANTIDAD_NUMEROS;
    printf("Resultado %.2f\nNumero Maximo es:%d\nNumero Minimo: %d",resultado,numeromaximo,numeroMinimo);
    return 0;

}
