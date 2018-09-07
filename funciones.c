#include <stdio.h>
#include <stdlib.h>


/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float getFloat(char mensaje[]){

    float numero;
    printf("%s",mensaje);
    scanf("%f",&numero);
    return numero;
    }


/**
 * \brief Suma dos variables del tipo float y devuelve el resultado
 * \param A y B son los operando
 * \return El resultado de la suma
 */
float suma (float A, float B){

return A + B;

}

/**
 * \brief Resta dos variables del tipo float y devuelve el resultado
 * \param A y B son los operando
 * \return El resultado de la resta
 */
float resta (float A, float B){

return A - B;

}


/**
 * \brief Multiplica dos variables del tipo float y devuelve el resultado
 * \param A y B son los operando
 * \return El resultado de la multiplicación
 */

float multiplicacion (float A, float B){

return A * B;

}


/**
 * \brief Divide dos variables del tipo float y devuelve el resultado
 * \param A y B son los operando
 * \return El resultado de la división
 */

float division (float A, float B){


    if(B==0){

        float resultado=0;
        return resultado;

    }
    else{
        float resultado=0;
        resultado=A/B;
        return resultado;
    }



}


/**
 *  \brief Calcula el factorial de un número y devuelve el resultado
 *  \param A es el numero cuyo factorial se debe calcular
 *  \return El factorial de A
 */

 float factorial(float A){

     float i,resultado=1;
     if(A==0){
        resultado=1;
     }
     else{

       for(i=A;i>0;i--){
          resultado=resultado*i;

          }
     }
     return resultado;

 }




