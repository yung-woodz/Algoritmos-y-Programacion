#include<stdio.h>
typedef struct 
 {
    int rut;
    char dv;
    char nombre[50] ;
    char carrera[50];
    int dia;
    int mes;
    int agno;
    int edad;
    char ciudad[50];
 } Estudiante;
 main()
 {
 	Estudiante a,e[30];
 	int i,n;
 	do
 	{
 		printf("\nIngrese nro de estudiantes (maximo 30): ");
 		scanf("%d",&n);
	} while (n<1 || n>30);
	for(i=0;i<n;i++)
	{	 
 		printf("\nIngrese Rut     : ");
		scanf("%d",&a.rut);
		fflush( stdin );
		printf("\nIngrese dv      : ");
		scanf("%c",&a.dv);
 		fflush( stdin );
		printf("\nIngrese Nombre  : ");
	    scanf("%s",&a.nombre) ;	
 		fflush( stdin );
		printf("\nIngrese Carrera : ");
		scanf("%s",&a.carrera);	
		printf("\nIngrese dia Nac : ");
		scanf("%d",&a.dia);
		printf("\nIngrese mes Nac : ");
   		scanf("%d",&a.mes);
		printf("\nIngrese agno Nac: ");
	    scanf("%d",&a.agno);
    	printf("\nIngrese Edad    : ");
    	scanf("%d",&a.edad);
		printf("\nIngrese Ciudad  : ");
	    scanf("%s",&a.ciudad);
		e[i]=a;				
	} 
	printf("\nDatos Ingresado\n");
	printf("\nrut   dv  nombre    carrera  Fecha_Nac edad   ciudad\n");
	for(i=0;i<n;i++)
	
 	{
 	    a=e[i];
	 	printf("%d %c %s %s %2d-%2d-%4d  %2d %s\n",a.rut,a.dv,a.nombre,a.carrera,a.dia,a.mes,a.agno,a.edad,a.ciudad );
    
	}
 }

