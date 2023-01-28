Proceso xd1
	
	Definir n como entero 
	Leer n
	
	Dimension v(n)
	
	Para i<-0 hasta n-1 Hacer
		v(i) <- Aleatorio(1,50)
		Escribir v(i)
	FinPara
	
	Escribir "-------------------"
	
	Para j<-0 hasta n-1 Hacer
		Escribir v(j)
	FinPara
	
	Escribir "-------------------"
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 Hasta n-1 Hacer
			Si v(i) == v(j) Entonces
				aux <- v(i)
			FinSi
		FinPara
		Escribir aux
	FinPara
	
FinProceso
