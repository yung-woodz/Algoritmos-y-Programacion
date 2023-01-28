Proceso certamenProgra3
	
	Definir n Como Real
	
	Leer n
	
	Dimension a(n), b(n)
	
	suma1 <- 0
	suma2 <- 0
	
	Para i<-0 hasta n-1 Hacer
		Escribir "Ingrese un valor para [", i+1, "]"
		Leer a(i)
		suma1 <- suma1 + a(i)
	FinPara
	
	Escribir "------------------------"
	
	Para j<-0 hasta n-1 Hacer
		Escribir "Ingrese un valor para [", j+1, "]"
		Leer b(j)
		suma2 <- suma2 + b(j)
	FinPara
	
	Escribir "------------------------"
	
	Si suma1 > suma2 Entonces
		Escribir "Solo queda el arreglo a(i)"
		Para i<-0 hasta n-1 Hacer
			Escribir "[", a(i), "]" Sin Saltar
		FinPara
	SiNo
		Si suma1 < suma2 Entonces
			Escribir "Solo queda el arreglo b(i)"
			Para i<-0 hasta n-1 Hacer
				Escribir "[", b(i), "]" Sin Saltar
			FinPara
		SiNo
			Si suma1 == suma2 Entonces
				Escribir "No quedó ningún arreglo"
			FinSi
		FinSi
	FinSi
	
	
	
FinProceso
