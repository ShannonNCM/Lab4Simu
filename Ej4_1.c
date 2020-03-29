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
	//Operaciones con matrices}
	//Suma de matrices
	
	//Multiplicacion de matrices
	int k;
	int C[i][i];
	//se realiza la multiplicacion de matrices
	for(i=0;i<3;i++){
		for(j=0;j<3;j++);
			C[i][j]=0;
			for(k=0;k<3;k++)
				C[i][j]+=matA[i][k]*matB[k][j];
	}
	//se presenta el resultado
	printf("Resultado\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",C[i][j]);
		printf("\n");
	}
}
