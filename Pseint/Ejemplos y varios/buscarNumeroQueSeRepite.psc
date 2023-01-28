Proceso buscarNumeroQueSeRepite
	
	Definir n Como Entero
	
	Leer n
	
	Dimension v(n)
	
	Para i<-0 hasta n-1 Hacer
		v(i) <- Aleatorio(1,9)
		Escribir "[", v(i), "]"
	FinPara
	
	mayor <- v(0)
	menor <- v(0)
	par <- 0
	impar <- 0
	
	Para i<-0 hasta n-1 Hacer
		contador <- 0
		Para j<-0 hasta n-1 Hacer
			Si v(i) == v(j) Entonces
				contador <- contador + 1
				x <- v(i)
			FinSi
		FinPara
	FinPara
	
	Para i<-0 hasta n-1 Hacer
		Si v(i) % 2 = 0 Entonces
			par <- par + 1
		SiNo
			impar <- impar + 1
		FinSi
		Si mayor < v(i) Entonces
			mayor <- v(i)
		FinSi
		Si menor > v(i) Entonces
			menor <- v(i)
		FinSi
	FinPara
	
	Si contador == 1 Entonces
		Escribir "Ningún número se repite"
	SiNo
		Escribir contador, " ", x
	FinSi
	
	Escribir mayor
	Escribir menor
	Escribir par
	Escribir impar
	
FinProceso
