Proceso sin_titulo
	
	Definir n, i Como Entero
	
	Escribir "Ingrese el largo del arreglo"
	
	Repetir
		Leer n
	Hasta Que n > 1
	
	Dimension v(n)
	
	Para i<-0 hasta n-1 Hacer
		Escribir "Ingrese el número del arreglo ", i+1
		Leer v(i)
	FinPara
	
	Para i<-0 hasta n-1 Hacer
		Escribir v(i)
	FinPara
	
	Para i<-n-1 hasta 0 con paso -1 hacer
		Escribir v(i)
	FinPara
	
FinProceso
