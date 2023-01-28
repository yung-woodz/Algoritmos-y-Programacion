Proceso sin_titulo
	
	Definir n Como Entero
	
	Leer n
	
	Dimension mat1(n,n), mat2(n,n)
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta n-1 Hacer
			mat1(i,j) <- Aleatorio(1,9)
			Escribir "[", mat1(i,j), "]" Sin Saltar
		FinPara
		Escribir " "
	FinPara
	
	Escribir "----------------"
	
	Para i<-n-1 hasta 0 con paso -1 Hacer
		Para j<-n-1 hasta 0 con paso -1 Hacer
			mat2(i,j) <- mat1(i,j)
			Escribir "[", mat2(i,j), "]" Sin Saltar
		FinPara
		Escribir " "
	FinPara
	
FinProceso
