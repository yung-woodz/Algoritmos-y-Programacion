Proceso sin_titulo
	
	Definir n Como Entero
	
	Repetir
		Leer n
	Hasta Que n > 1 y n % 2 <> 0
	
	n <- n + 1
	
	Dimension mat(n,n)
	
	elementoCentro <- 0
	
	Para i<-0 Hasta n-1 Hacer
		Para j<-0 hasta n-1 Hacer
			mat(i,j) <- 0
			mat(i,j) <- i * j
			Si i = 0 Entonces
				mat(i,j) <- j
			FinSi
			Si j = 0 Entonces
				mat(i,j) <- i
			FinSi
			
		FinPara
	FinPara
	
	Para i<-0 Hasta n-1 Hacer
		Para j<-0 hasta n-1 Hacer
			Escribir "[", mat(i,j), "]" Sin Saltar
			Si (i = j) y (i + j = n - 1) Entonces
				elementoCentro <- mat(i,j)
			FinSi
		FinPara
		Escribir " "
	FinPara
	Mostrar "El elemnto centro es: ", elementoCentro
FinProceso
