#include <stdio.h>
#include <stdlib.h>
int PedirEdad()
{
    int edad;
    printf("ingrese su edad \n");
    scanf("%d",&edad);
    return 0;
}

int ValidarEdad(int edad , int minimo, int maximo )
{
 while (edad < minimo || edad > maximo)
    {
        printf("Error, reingrese su edad\n");
        scanf("%d",&edad);
    }
    return 0;
}

int main()
{
   int edad;
   int esValidadLaEdad;
   do {
        edad = PedirEdad();
        esValidadLaEdad = ValidarEdad(edad,1,100);
   }while(esValidadLaEdad !=1);
   return 0;
}
