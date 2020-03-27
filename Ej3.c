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
//Se definen las funciones a utilizar
//Funcion magnitud

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
		printf("Ingresar valor entero: \n");
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
		printf("Ingresar valor entero: \n");
		scanf("%d",&n);
		V[i]=n;
	}
	//Muestra el vector V
	puts("Vector V");
	for(i=0;i<3;i++){
		printf("%d ",V[i]);
	}
}
