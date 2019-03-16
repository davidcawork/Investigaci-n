#include <stdio.h>	/*	Para printf	*/
#include <math.h>       /*	Para sqrt	*/
#include <stdlib.h> 	/*	Para atoi	*/

double f(double x){

	return (sqrt(1 - x*x));
}


int main(int argc, char * argv[]){

	double resultado = 0.0;
	double init = 0.0, fin = 1.0, interval = 0.0;
	int n_divisiones = atol(argv[1]), i;
	
	interval = 1/(double)n_divisiones;
	fin = interval;

	for(i = 0; i < n_divisiones; i++){
		if( fin > 1)
			fin = 1;
		
//		printf("Division de %.20f a %.20f\n",init,fin);
		resultado += ((f(fin) + f(init))*((fin) - (init))/2);
		init += interval;
		fin += interval;
	}
	printf("El resultado de la integral es: %.20f\n", 4*resultado);
	
	
	
	return 0;
}
