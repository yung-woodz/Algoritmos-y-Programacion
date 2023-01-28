Proceso recorrer_arreglo
	
	Definir i Como Entero
	Dimension A[6]
	
	Para i desde 1 hasta 5 Hacer
		Leer A[i]
	FinPara
	
	Escribir "Los elementos del arreglo son: "
	Para i desde 1 hasta 5 Con Paso 1 Hacer
		Escribir "Posición " i ": " A[i]
	FinPara
	
	Escribir ""
	Escribir "En orden inverso: "
	
	Para i desde 5 hasta 1 con paso -1 Hacer
		Escribir sin bajar A[i] " "
	FinPara
	
	
FinProceso
