/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 21 de septiembre de 2018, 08:13 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string>

/*
 * 
 */
int main(int argc, char** argv) {
         int numeros[] = {10, 20, 30, 40, 50};
          
            
              // Impresion del arreglo.
             printf("Indice\tValor");
             for(int contador=0; contador<numeros.length; contador++)
                    printf(contador+"\t"+numeros[contador]);
            
              // Impresión invertida del arreglo.
             printf();
             printf("Indice\tValor");
             for(int contador=numeros.length-1; contador>=0; contador--)
                    printf(contador+"\t"+numeros[contador]);
        return (0);  
}



