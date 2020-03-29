/*
Autor: shannon-pc
Compilador: gcc (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008
Compilado: gcc Ej4.c -o Ej4.c
Fecha: sáb mar 28 20:31:51 CST 2020
Librerias: stdio, etc.
Resumen: Este programa pide al usuario que ingrese dos matrices (matA y matB)de 3x3 y una constante, con las cuales efectua el producto de la matA con la constante, suma, resta, multiplicacion, determinante de matA, transpuesta de matB, inversa de matA, reduccion de Gauss de matA y reduccion Gauss-Jordan de matB.
Entradas: Numeros enteros
Salidas: Matrices de numeros enteros, enteros, decimales.
*/
  
//Librerias
#include <stdio.h>
#include <math.h>
//Funcion para el producto matA por constante


//Inicio del programa
void main()
{
	//Se declaran las variables al ingresar matrices
	int n,c,i,j;
	int matA[3][3],matB[3][3];
	//Solicita al usuario ingrese el valor de la constante
	printf("Ingrese un valor entero para la constante ");
	scanf("%d",&n);
	c=n;
	//Se solicita al usuario ingrese los valores para las matrices
	//Ingreso de valores de matA
	puts("Valores de matA");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			scanf("%d",&matA[i][j]);
		}
	//Matriz matA
	puts("matA");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d",matA[i][j]);
		printf("\n");
	}
	//Ingreso de valores de matB
	puts("Valores de matB");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			scanf("%d",&matB[i][j]);
		}
	//Matriz matB
	puts("matB");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d",matB[i][j]);
		printf("\n");
	}
	//Operaciones con matrices
	//Producto matA por constante
	int MULC[3][3];
	//se realiza la la multiplicacion c*matA
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			MULC[i][j]=matA[i][j]*c;
	}
	//se muestra la matriz
	printf("Matriz constante*matA\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",MULC[i][j]);
		printf("\n");
	}
	//Suma de matrices
	int SUM[3][3];
	//se realiza la suma de matrices matA+matB
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		SUM[i][j]=matA[i][j]+matB[i][j];
	}
	//se muestra la matriz suma
	printf("Matriz suma\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",SUM[i][j]);
		printf("\n");
	}
	//Resta de matrices
	int RES[3][3];
	//se realiza la resta de matrices matA-matB
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			RES[i][j]=matA[i][j]-matB[i][j];
	}
	//se muestra la matriz resta
	printf("Matriz resta\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",RES[i][j]);
		printf("\n");
	}
	//Multiplicacion de matrices
	int MUL[3][3];
	//se realiza la multiplicacion de matrices
	
}
