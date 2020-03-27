/*
Autor: shannon-pc
Compilador: gcc (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008
Compilado: gcc Ej2.c -o Ej2.c
Fecha: jue mar 26 16:49:07 CST 2020
Librerias: stdio, etc.
Resumen: Este programa solicita ingresar cinco numros enteros los cuales guarda en un vector y luego los ordena de forma ascendente mostrando el vector ordenado.
Entradas: Numeros enteros
Salidas: Vector de numeros enteros
*/
  
//Librerias
#include <stdio.h>
//Inicio del programa
void main()
{
	//Se declaran las variables a utilizar al ingresar el vector
	int n,i;
	int Vec[5];
	//Se pide que el usuario ingrese los numeros para el vector
	for(i=0;i<5;i++){
		printf("Ingresar valor entero: \n");
		scanf("%d",&n);
		Vec[i]=n;
	}
	//Se muestra el vector ingresado
	puts("\nVector");
	for(i=0;i<n;i++){
		printf("%d ",Vec[i]);
	}
	//Incio del ordenamiento del vector por el metodo de seleccion
	//Se declaran las variables a utilizar
	int j,min;
	//Inicio de las pasadas
	for(i=0;i<n-1;i++){
		//Inicio de exploracion en i
		min=i;
		for(j=i+1;j<n;j++)
			if(Vec[j]<Vec[min]);
			min=j;
		if(i!=min){
			int l=Vec[i];
			Vec[i]=Vec[min];
			Vec[min]=l;
		}
	}
	puts("\nVector Ordenado");
	for(i=0;i<n;i++){
		printf("%d ",Vec[i]);
	}
}

