#include <stdio.h>

int main (){
	//realice un programa que permita usar dos numeros para realizar las cuatro operaciones al mismo tiempo
	
	//definir variables
	int n1 ;
	int n2  ;
	int suma, resta, multiplicar, dividir ;
	//entrada 
	printf ("INGRESE EL PRIMER NUMERO ") ;
	scanf ( "%d", &n1);
	printf ("INGRESE EL SEGUNDO NUMERO ") ;
	scanf ( "%d", &n2);
	//Proceso
	suma=n1+n2;
	resta=n1-n2;
	multiplicar=n1*n2;
	dividir=n1/n2;
	
	//Salida
	printf (" EL RESULTADO DE LA SUMA ES: %d\n", suma );
	printf (" EL RESULTADO DE LA RESTA ES: %d\n", resta );
	printf (" EL RESULTADO DE LA MULTIPLICACION ES: %d\n", multiplicar );
	printf (" EL RESULTADO DE LA DIVISION ES: %d\n", dividir );
	
	
	
	
	
	
	

return 0;
}