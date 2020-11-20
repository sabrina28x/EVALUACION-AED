#include <stdio.h>
#include <stdlib.h>



main()
{
	int numero,sumapar=0,sumaimpar=0;
	bool bandera=true; //variable booleana, que acepta dos estados, true o false

	printf("\nIngrese un numero: ");
	scanf("%d",&numero);
	if(numero==0) bandera=false;
	while(bandera==true )
	{
	    
		if(numero%2==0)	// MOD = % para verificar si es par
		{
			sumapar=sumapar+numero;
		}
		else //es impar
		{
			sumaimpar=sumaimpar+numero;
		}
		printf("\nIngrese un numero: ");
		scanf("%d",&numero);
		
		if(numero==0) bandera=false;

	}
	printf("\nLa suma de los valores pares es: %d",sumapar);
	printf("\n\n\nLa suma de los valores impares es: %d",sumaimpar);
 	printf("\n\n");
 	system("pause");
}

