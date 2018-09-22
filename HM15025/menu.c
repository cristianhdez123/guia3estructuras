/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 21 de septiembre de 2018, 06:45 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main() {
     
         
      int n1, n2, resta, suma,*p1,*p2;
     int menu=0;
         printf("\n");
         printf("-----------\n");
         printf("que desea realizar\n");
          printf("1.Ingresar dos numeros enteros\n");
           printf("2.Calcular su suma utilizando punteros\n");
            printf("3.Calcular su resta utilizando punteros\n");
            printf("4.Imprimir la direccion de memoria de cada variable");
            printf("-----------\n");
            scanf("%i",&menu);
            
           if(menu==1){
               
               printf( "\n   Introduzca primer numero (entero): " );
    scanf( "%d", &n1 );
    n1=*p1;
    printf( "\n   Introduzca segundo numero (entero): " );
    scanf( "%d", &n2 );
    n2=*p2;

    
           } else if(menu==2){
           suma = *p1 + *p2;
     printf( "\n   La suma es: %d", suma );
           } else if(menu==3){
                 resta = *p1 - *p2;
     printf( "\n   La resta  es: %d", resta );
             
           } else if(menu==4){
               printf( "\n   La direcccion de n1 es: %d", *p1 );
           printf( "\n   La direcccion de n1 es: %d", *p2 );
              
               
           } 
            
            printf("\n");
             printf("-------------\n");
            
    

            
    }
    
    


    
    

    



