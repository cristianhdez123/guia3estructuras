/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 21 de septiembre de 2018, 07:30 PM
 */
using System;
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main() {
    int tam,aux;
    printf("\nINGRESE EL TAMANO DEL VECTOR1:\n\n");
    scanf("%d",&tam);
    int vector[tam];
    for(int i=0;i<tam;i++){
        printf("\nINGRESE UN NUMERO:\n\n");
        scanf("%d",&vector[i]);
    }
    printf("\nDATOS INGRESADOS: ");
    for(int i=0;i<tam;i++){
    printf("%d  ",vector[i]);
    }
printf("\n");
    for(int a=0;a<tam;a++){
        for(int b=0;b<tam;b++){
            if(vector[a]>vector[b]){
                aux=vector[a];
                vector[a]=vector[b];
                vector[b]=aux;
            }
            if(vector[(tam-1)-b]>vector[(tam-1)-b]){
                aux=vector[(tam-1)-b];
                vector[(tam-1)-b]=vector[(tam-1)-b];
                vector[(tam-1)-b]=aux;
            }
        }
    }
int tama,auxi;
    printf("\nINGRESE EL TAMANO DEL VECTOR2:\n\n");
    scanf("%d",&tama);
    int vector2[tama];
    for(int s=0;s<tama;s++){
        printf("\nINGRESE UN NUMERO:\n\n");
        scanf("%d",&vector[s]);
    }
    printf("\nDATOS INGRESADOS VECTOR 2: ");
    for(int s=0;s<tama;s++){
    printf("%d  ",vector2[s]);
    }
printf("\n");
    for(int x=0;x<tama;x++){
        for(int y=0;y<tama;y++){
            if(vector2[x]>vector2[x]){
                auxi=vector2[x];
                vector2[x]=vector2[y];
                vector2[y]=auxi;
            }
            if(vector2[(tama-1)-y]>vector2[(tama-1)-y]){
                auxi=vector2[(tama-1)-y];
                vector2[(tama-1)-y]=vector2[(tama-1)-y];
                vector2[(tama-1)-y]=auxi;
            }
        }
    }

    return (EXIT_SUCCESS);
}

