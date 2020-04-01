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
float fa(int);
//Segunda funcion fb
float fb(int);
//Tercera funcion fc
float fc(int);
//Cuarta funcion fd
float fc(int);

//Se declaran las funciones antes de main
//Funcion fa
float fa(int x)
{
	long int Fa;
	Fa=(x*x)*(x-3);
	return Fa;
}
//Funcion fb
float fb(int x)
{
	long int Fb;
	Fb=3/(x-1);
	return Fb;
}
//Funcion fc
float fc(int x)
{
	long int Fc;
	Fc=((1/sqrt(5))*(pow((1+sqrt(5))/2,x)))-((1/sqrt(5))*(pow((1-sqrt(5))/2,x)));
	return Fc;
}
//Funcion fd
float fd(int x)
{
	long int Fd;
	Fd=0.1*(3*(pow(2,x-2))+4);
	return Fd;
}
//Inicio de la funcion main
void main()
{
	//Se declaran las variables a utilizar
	int k,n;
	float suma=0;
	//Solicitar al usuario que ingrese un numero entero para la sumatoria
	puts("Ingresar un numero entero N:");
        scanf("%d",&n);
	
	//Realizar la sumatoria de la primera funcion
	for(k=1;k<=n;k++){
			suma=suma+fa(k);
	}
	printf("La sumatoria de funcion a es: %f",suma);
	printf("\n");
	
	//Realizar la sumatoria de la segunda funcion
	//Esta sumatoria cambia el valor de inicio ya que para N=1 hay discontinuidad en la funcion
	for(k=2;k<=n;k++){
                        suma=suma+fb(k);
        }
        printf("La sumatoria de funcion a es: %f",suma);
        printf("\n");

	//Realizar la sumatoria de la tercera funcion
	for(k=1;k<=n;k++){
                        suma=suma+fc(k);
        }
        printf("La sumatoria de funcion a es: %f",suma);
        printf("\n");
	//Realizar la sumatoria de la cuarta funcion
        for(k=2;k<=n;k++){
                        suma=suma+fd(k);
        }
        printf("La sumatoria de funcion a es: %f",suma);
        printf("\n");

}
