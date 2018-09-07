#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"




int main()
{
  int opcion;
  float nro1=0, nro2=0, resSuma, resResta, resMulti, resDiv, resFac1, resFac2;


   do{

    printf ("\n\n**********MENU CALCULADORA**********\n\n\n");
    printf ("1.Ingresar el primer n%cmero: (A=%.2f)",163,nro1);
    printf ("\n2.Ingresar el segundo n%cmero: (B=%.2f)",163,nro2);
    printf ("\n3.Calcular todas las operaciones");
    printf ("\n4.Informar todos los resultados");
    printf ("\n5.Salir");
    printf ("\n\nIngrese opcion deseada:\n\n\n");
    scanf ("%d",&opcion);





       switch (opcion){
       case 1:
           system("cls");
           nro1=getFloat("\n\n\nIngrese el primer numero:\n\n\n");
           system("cls");

        break;

       case 2:
           system("cls");
           nro2=getFloat("\n\n\nIngrese el segundo numero:\n\n\n");
           system("cls");

        break;

       case 3:

           system("cls");
           resSuma=suma (nro1, nro2);
           resResta=resta (nro1, nro2);
           resMulti=multiplicacion (nro1, nro2);
           resDiv=division (nro1, nro2);
           resFac1=factorial (nro1);
           resFac2=factorial (nro2);
           printf("\n\n\n\n****CALCULOS EFECTUADOS CON EXITO****\n\n\n\n");
           printf("Presione una tecla para continuar:");
           getch();
           system("cls");



        break;

        case 4:
           system("cls");
           printf("\n\n\n\n****RESULTADOS****\n\n");
           printf("\nEl resultado de A+B es %.2f", resSuma);
           printf("\n\nEl resultado de A-B es %.2f", resResta);
           printf("\n\nEl resultado de A*B es %.2f",resMulti);
           if((nro2==0)){
                 printf("\n\nERROR EN LA DIVISI%cN: no se puede dividir por cero.",224);
               }
               else{
                 printf("\n\nEl resultado de A/B es %.2f", resDiv);
               }

           if((nro1<0)){
                 printf("\n\nERROR: No se puede calcular factorial de A.");
               }
               else{
                 printf("\n\nEl factorial de A es: %.2f", resFac1);
               }

           if((nro2<0)){
                 printf("\n\nERROR: No se puede calcular factorial de B.\n\n\n\n");
               }
               else{
                 printf("\n\nEl factorial de B es: %.2f\n\n\n\n", resFac2);
               }
           printf("Presione una tecla para continuar:");
           getch();
           system("cls");

        break;

        }

   }while(opcion!=5);



    return 0;
}
