/*
Autor: shannon-pc
Compilador: gcc (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008
Compilado: gcc Ej6.c -o Ej6.c
Fecha: lun mar 30 15:25:43 CST 2020
Librerias: stdio, etc.
Resumen: Este programa calcula la sumatoria desde 1 hasta un numero N que ingrese el usuario de distintas funciones.
Entradas: Enteros
Salidas: Enteros, decimales
*/
  
//Librerias
#include <stdio.h>
#include <math.h>
//Se declaran las funciones como prototipos
//Primera funcion fa
long int fa(int);
//Segunda funcion fb
float fb(int);
//Tercera funcion fc
//Cuarta funcion fd
//Se declaran las funciones antes de main
//Funcion fa
long int fa(int x)
{
	(x*x)*(x-3);
}
//Funcion fb
float fb(int x)
{
	3/(x-1);
}
//Funcion fc
//Funcion fd
//Inicio de la funcion main
void main()
{
	//Se declaran las variables a utilizar
	int i,k,n,N;
	long int suma=0;
	//Solicitar al usuario que ingrese un numero entero para la sumatoria
	puts("Ingresar un numero entero N:");
        scanf("%d",&n);
	N=n;
	//Realizar la sumatoria de la primera funcion
	for(k=1;k<=N;k++){
		i=fa(k);
		for(i=1;i<=N;i++){
			suma=suma+i;
		}
	}
	printf("La sumatoria de funcion a es: %ld",suma);
	printf("\n");

}
