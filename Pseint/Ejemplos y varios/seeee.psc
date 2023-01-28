Proceso sin_titulo
	
	Definir n Como Entero
	
	Escribir "Ingrese el tamaño del arreglo"
	Leer n
	
	Dimension v(n)
	
	Para i<-0 hasta n-1 Hacer
		v(i) <- Aleatorio(1,20)
		Escribir v(i)
	FinPara
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta n-1 Hacer
			Si v(i) < v(j) Entonces
				aux <- v(i)
				v(i) <- v(j)
				v(j) <- aux
			FinSi
		FinPara
	FinPara
	
	Escribir "----------------"
	
	Para i<-0 hasta n-1 Hacer
		Escribir v(i)
	FinPara
	
FinProceso
