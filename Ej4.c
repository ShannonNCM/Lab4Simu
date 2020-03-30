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
	puts("\nValores de matA");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			scanf("%d",&matA[i][j]);
		}
	//Matriz matA
	puts("\nmatA");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",matA[i][j]);
		printf("\n");
	}
	//Ingreso de valores de matB
	puts("\nValores de matB");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			scanf("%d",&matB[i][j]);
		}
	//Matriz matB
	puts("\nmatB");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",matB[i][j]);
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
	puts("\nMatriz constante*matA");
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
	puts("\nMatriz suma");
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
	puts("\nMatriz resta");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",RES[i][j]);
		printf("\n");
	}
	
	//Multiplicacion de matrices
	//Multiplicacion de matrices
        int k;
        int C[i][i];
        //se realiza la multiplicacion de matrices
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        C[i][j]=0;
                        for(k=0;k<3;k++){
                                C[i][j]+=(matA[i][k]*matB[k][j]);
                                        }
                                }
        }
        //se presenta el resultado
        puts("\nMatriz multiplicacion");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d ",C[i][j]);
                                 }

                printf("\n");
        }	

	//Determinante de matA
	int detA;
	detA=(matA[0][0]*((matA[1][1]*matA[2][2])-(matA[1][2]*matA[2][1])))+(matA[0][1]*((matA[1][2]*matA[2][0])-(matA[1][0]*matA[2][2])))+(matA[0][2]*((matA[1][0]*matA[2][1])-(matA[1][1]*matA[2][0])));
        printf("\nEl determinante de matA es: %d",detA);
	printf("\n");
	
	//Transpuesta de matB
	puts("\nTranspuesta de matB");
	for(i=0;i<3;i++){
                for(j=0;j<3;j++)
                        printf("%d ",matB[j][i]);
                printf("\n");
	}
	
	//Inversa de matA
	

	//Reduccion Gauss matA
	float mata[3][3];
        //1er cambio: Cambio en primera fila
        for(j=0;j<3;j++){
                mata[0][j]=matA[0][j]/matA[0][0];
                mata[1][j]=matA[1][j];
                mata[2][j]=matA[2][j];
        }
        //2do cambio: Primer cambio en la segunda fila y tercera fila
        float mata1[3][3];
        for(j=0;j<3;j++){
                mata1[0][j]=mata[0][j];
		if(mata[1][0]<0){
			mata1[1][j]=(mata[1][0]*mata[0][j])+mata[1][j];
		}else{
			mata1[1][j]=(mata[1][0]*mata[0][j])-mata[1][j];
		}
                if(mata[2][0]<0){
			mata1[2][j]=(mata[2][0]*mata[0][j])+mata[2][j];
		}else{
			mata1[2][j]=(mata[2][0]*mata[0][j])-mata[2][j];
		}
        }
	//3er cambio: Segundo cambio en la segunda fila y tercera fila
        float mata2[3][3];
        for(j=0;j<3;j++){
                mata2[0][j]=mata1[0][j];
                mata2[1][j]=mata1[1][j]/mata1[1][1];
                mata2[2][j]=mata1[2][j]/mata1[2][1];
        }
        //4to cambio: Tercer cambio en la tercera fila
        float mata3[3][3];
        for(j=0;j<3;j++){
                mata3[0][j]=mata2[0][j];
                mata3[1][j]=mata2[1][j];
		if(mata2[2][1]<0){
			mata3[2][j]=(mata2[2][1]*mata2[1][j])+mata2[2][j];
		}else{
			mata3[2][j]=(mata2[2][1]*mata2[1][j])-mata2[2][j];
		}
        }
        //se muestra la matriz
        puts("\nReduccion Gauss matA");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++)
                        printf("%f ",mata3[i][j]);
                printf("\n");
        }

	//Reduccion de GaussJordan matB
	float matb[3][3];
        //1er cambio: Cambio en primera fila
        for(j=0;j<3;j++){
                matb[0][j]=matB[0][j]/matB[0][0];
                matb[1][j]=matB[1][j];
                matb[2][j]=matB[2][j];
        }
        //2do cambio: Primer cambio en la segunda fila y tercera fila
        float matb1[3][3];
        for(j=0;j<3;j++){
                matb1[0][j]=matb[0][j];
		if(matb[1][0]<0){
			matb1[1][j]=(matb[1][0]*matb[0][j])+matb[1][j];
		}else{
			matb1[1][j]=(matb[1][0]*matb[0][j])-matb[1][j];
		}
		if(matb[2][0]<0){
			matb1[2][j]=(matb[2][0]*matb[0][j])+matb[2][j];
		}else{
			matb1[2][j]=(matb[2][0]*matb[0][j])-matb[2][j];
		}
        }
	//3er cambio: Segundo cambio en la segunda fila y tercera fila
        float matb2[3][3];
        for(j=0;j<3;j++){
                matb2[0][j]=matb1[0][j];
                matb2[1][j]=matb1[1][j]/matb1[1][1];
                matb2[2][j]=matb1[2][j]/matb1[2][1];
        }
        //4to cambio: Tercer cambio en la tercera fila
        float matb3[3][3];
        for(j=0;j<3;j++){
                matb3[0][j]=matb2[0][j];
                matb3[1][j]=matb2[1][j];
                if(matb2[2][1]<0){
			matb3[2][j]=(matb2[2][1]*matb2[1][j])+matb2[2][j];
		}else{
			matb3[2][j]=(matb2[2][1]*matb2[1][j])-matb2[2][j];
		}
        }
	//5to cambio: Tercer cambio en la segunda fila y primera fila
	float matb4[3][3];
	for(j=0;j<3;j++){
                if(matb3[3][3]<0){
			matb4[0][j]=(matb3[0][2]*matb3[2][j])+matb3[0][j];
		}else{
			matb4[0][j]=(matb3[0][2]*matb3[2][j])-matb3[0][j];
		}
                if(matb3[1][2]<0){
			matb4[1][j]=(matb3[1][2]*matb3[2][j])+matb3[1][j];
		}else{
			matb4[1][j]=(matb3[1][2]*matb3[2][j])-matb3[1][j];
		}
                matb4[2][j]=matb3[2][j];
        }
	//6to cambio: Cuarto cambio en la primera fila
	float matb5[3][3];
	for(j=0;j<3;j++){
                if(matb4[0][1]<0){
			matb5[0][j]=(matb4[0][1]*matb3[1][j])+matb3[0][j];
		}else{
			matb5[0][j]=(matb4[0][1]*matb3[1][j])-matb3[0][j];
		}
                matb5[1][j]=matb4[1][j];
                matb5[2][j]=matb4[2][j];
        }
        //se muestra la matriz
        puts("\nReduccion Gauss-Jordan matB");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++)
                        printf("%f ",matb5[i][j]);
                printf("\n");
	}
}

