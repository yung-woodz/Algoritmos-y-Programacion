#include<stdio.h>
//21.039.710-8 Tomas Agustin Mendez Andrades

void pago_sueldos(int *cta_empresa, int * cta_trabaj, int transferencia);
int main()
{
	printf("____:::Pregunta 2 *TOMAS AGUSTIN MENDEZ ANDRADES*::___\n");
	
	int cta_empresa=12000000, cta_trab= 1000000, tranferencia = 0; 
	printf("Saldo inicial empresa: %d\n", cta_empresa);
	printf("Saldo inicial trabajador: %d\n", cta_trab);
	//hacer llamada a función
	pago_sueldos(&cta_empresa, &cta_trab, tranferencia);
	
	
	printf("Saldo final empresa: %d\n", cta_empresa);
	printf("Saldo final trabajador: %d\n", cta_trab);
}

void pago_sueldos(int *cta_empresa, int * cta_trabaj, int transferencia)
{
	int monto;
	
	printf("Ingrese el monto a transferir: ");
	do{
	scanf("%d",&monto);
	if (monto <=0){
		printf("\nEl monto a transferir tiene que ser mayor a 0\n");
	}
	}while(monto <= 0);
	
	if (*cta_empresa > monto){
		*cta_empresa = *cta_empresa - monto;
		*cta_trabaj = *cta_trabaj + monto;
	}else{
		printf ("El saldo insuficiente para transferir");
	}
}
