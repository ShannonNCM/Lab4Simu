#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
//Inicio del programa
void main()
{
	//Se declaran las variables
	char letra;
	//Se solicita que escoja el ordenamiento del vector
	do{
		printf("\nIngrese a para mostrar el vector en orden ascendente o b para mostrarlo en orden descendente\n");
		letra=getchar();
		//Iniciamos las opciones
		switch(letra){
			case 'a': printf("\nVector ordenado ascendente");
				  //Ordenamiento ascendente
				  int n,i,j,min;
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
			case 'd': printf("\nVector ordenado descendente");
		}
	}while(letra!='a' && letra!='d');
}
