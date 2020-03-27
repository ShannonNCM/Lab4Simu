/*
Autor: shannon-pc
Compilador: gcc (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008
Compilado: gcc Ej1.c -o Ej1.c
Fecha: jue mar 26 20:30:54 CST 2020
Librerias: stdio, etc.
Resumen: El programa tiene un vector de numeros pares del 2 al 20, el cual se muestra ordenado de forma ascendente cuando el usuario escribe "a" o descendente si escribe "d".
Entradas: Caracteres
Salidas: Vector
*/
  
//Librerias
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
//Inicio del programa
void main()
{
	//Vector de elementos pares
	//Se declaran las variables a utilizar
	int i,n=10;
	int V[]={20,14,6,8,10,2,4,16,18,12};
	//Se presenta el vector inicial
	puts("Vector inicial");
	for(i=0;i<n;i++){
		printf("%d ",V[i]);
	}
	//Menu de seleccion
	//Se declaran las variables
	char letra;
	//Se solicita que escoja el ordenamiento del vector
	do{
		printf("\nIngrese 'a' para mostrar el vector en orden ascendente");
		printf("\nIngrese 'd' para mostrar el vector en orden descendente\n");
		letra=getchar();
		//Inicio de las opciones
		switch(letra){
			case 'a': printf("\nVector ordenado ascendente\n");
				  //Ordenamiento ascendente
				  int j,min;
				  for(i=0;i<n-1;i++){
					 min=i;
					for(j=i+1;j<n;j++)
					       if(V[j]<V[min])
							min=j;
					if(i!=min){
						int l=V[i];
						V[i]=V[min];
						V[min]=l;
					}
				  }
			  	  for(int i=0;i<n;i++){
					  printf("%d ",V[i]);
				  }
				  puts("\nFin");	  
				  break;
			case 'd': printf("\nVector ordenado descendente\n");
				  //Ordenamiento descendente
				  int max;
				  for(i=0;i<n-1;i++){
					  max=i;
					  for(j=i+1;j<n;j++)
						  if(V[j]>V[max])
							  max=j;
					  if(i!=max){
						  int l=V[i];
						  V[i]=V[max];
						  V[max]=l;
					  }
				  }
				  for(int i=0;i<n;i++){
					  printf("%d ",V[i]);
				  }
				  puts("\nFin");
		}
	}while(letra!='a' && letra!='d');
}	
