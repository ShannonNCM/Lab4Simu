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
	for(i=0;i<5;i++){
		printf("%d ",Vec[i]);
	}
	//Incio del ordenamiento del vector por el metodo de seleccion
	//Se declaran las variables a utilizar
	int j,k,min;
	//Inicio de las pasadas
	for(k=0;k<4;k++){
		//Inicio de exploracion en i
		i=k;
		min=Vec[k];
		for(j=k+1;j<5;j++){
			if(Vec[j]<min){
			i=j;
			min=Vec[i];}
		}
			Vec[i]=Vec[k];
			Vec[k]=min;
	}
	puts("\nVector Ordenado");
	for(i=0;i<5;i++){
		printf("%d ",Vec[i]);
	}
	puts("\nFin");
}

