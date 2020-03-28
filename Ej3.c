/*
Autor: shannon-pc
Compilador: gcc (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008
Compilado: gcc Ej3.c -o Ej3.c
Fecha: vie mar 27 11:45:43 CST 2020
Librerias: stdio, etc.
Resumen: El programa solicita al usuario dos posiciones en las coordenadas (x,y,z) almacenandolas en vectores y calcula la magnitud de cada vector, suma, producto escalar y producto vectorial de los vectores.
Entradas: Enteros
Salidas: Enteros, vectores
*/
  
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Inicio del programa
void main()
{
	//Variables a utilizar al ingresar los vectores
	int n,i;
	int U[3],V[3];
	//Se solicita al usuario ingrese los numeros para cada vector
	//Vector U
	puts("Coordenadas vector U");
	for(i=0;i<3;i++){
		printf("Ingresar valor entero: ");
		scanf("%d",&n);
		U[i]=n;
	}
	//Muestra el vector U
	puts("Vector U");
	for(i=0;i<3;i++){
		printf("%d ",U[i]);
	}
	//Vector V
	puts("\n\nCoordenadas vector V");
	for(i=0;i<3;i++){
		printf("Ingresar valor entero: ");
		scanf("%d",&n);
		V[i]=n;
	}
	//Muestra el vector V
	puts("Vector V");
	for(i=0;i<3;i++){
		printf("%d ",V[i]);
	}
	//Inicio de operaciones de vectores U y V
	puts("\n\nOperaciones de Vectores");
	//Calculo de magnitud de los vectores
	float MAGU,MAGV;
	//Magnitud de U
	MAGU=sqrt((U[0]*U[0])+(U[1]*U[1])+(U[2]*U[2]));
	printf("\nMagnitud de U: %f",MAGU);
	//Magnitud de V
	MAGV=sqrt((V[0]*V[0])+(V[1]*V[1])+(V[2]*V[2]));
	printf("\nMagnitud de V: %f",MAGV);
	//Calculo de suma de vectores
	int S[3];
	for(i=0;i<3;i++){
		S[i]=U[i]+V[i];
	}
	//Vector suma
	puts("\nVector suma");
	for(i=0;i<3;i++){
	printf("%d ",S[i]);
	}
	//Calculo del producto escalar
	int PES;
	PES=(U[0]*V[0])+(U[1]*V[1])+(U[2]*V[2]);
	printf("\nProducto escalar: %d",PES);
	//Calculo del producto vectorial
	int a,b,c;
	a=(U[1]*V[2])-(U[2]*V[1]);
	b=(U[2]*V[0])-(U[0]*V[2]);
	c=(U[0]*V[1])-(U[1]*V[0]);
	puts("\nProducto vectorial");
	printf("%d %d %d ",a,b,c);
	puts("\nFin");
}
