#include <stdio.h>

void quicksort(int * array, int n){

	int iterador_izq, iterador_derecha, pivote;
	

}

int main(int argc, char * argv []){
	
	/*	Var. aux	*/
	int array[] = {9,4,2,6,8,1,2,7,3,0};
	int iterador_izq, iterador_derecha, pivote;
	int i;


	for(i = 0; i < (sizeof(array)/sizeof(int)); i++)
		printf("%d\n", array[i]);

	/*	QuickSort	*/
	quicksort(array, (sizeof(array)/sizeof(int))); 
	return 0;
}
