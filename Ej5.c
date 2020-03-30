/*
Autor: shannon-pc
Compilador: gcc (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008
Compilado: gcc Ej5.c -o Ej5.c
Fecha: lun mar 30 13:51:39 CST 2020
Librerias: stdio, etc.
Resumen: Este programa encuentra el factorial de un numero entero ingresado utilizando una funcion recursiva.
Entradas: Numero entero
Salidas: Numero entero
*/
  
//Librerias
#include <stdio.h>
//Se declara la funcion como prototipo
long int factorial(int);
//Declarar la funcion antes del main
//Factorial de un entero
long int factorial(int n)
{
	if(n<=1){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}
//Inicio de funcion main
void main()
{
	//Se declara la variable a utilizar
	int x;
	//Solicitar al usuario que ingrese un numero entero
	puts("Ingresar un numero entero:");
	scanf("%d",&x);
	//Ejecutar la funcion
	//Presentar el factorial del numero
	printf("El factorial de %d es: %ld",x,factorial(x));
	printf("\n");
}
