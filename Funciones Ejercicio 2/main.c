#include <stdio.h>
#include <stdlib.h>

void esPar(int);
int main()
{
  /*
   Escribe una funci�n llamada esPar que tome un entero como par�metro y retorne 1 si el n�mero es par,
    o 0 si es impar. Luego, usa esta funci�n en el main para verificar la paridad de un n�mero fijo.
  */
    int numero = 0;
    printf("Ingrese un numero: \n");
    scanf("%d",&numero);
    esPar(numero);

    return 0;
}
void esPar (int numero)
{

      if(numero % 2 == 0){
       printf("El numero ingresado es : %d  (par)! \n",numero);
      }else if(numero % 1 == 0 ){
        printf("El numero ingresado es :  %d  (inpar)! \n",numero);
      }else{
        printf("Numero incorrecto, intente de nuevo!\n");
 }

}
