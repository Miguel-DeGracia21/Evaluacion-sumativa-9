#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	//Variables
	int num,i,cifras=1;
	//Instrucciones
	printf("Digite un numero: ");
	scanf("%d",&num);

	for(i=1;i<=log10(num);i++){
	num /10!= 0;
	cifras=cifras+1;
	}

	printf("\n\nEl numero es de %d cifras\n\n",cifras);

	system("PAUSE");

	}
