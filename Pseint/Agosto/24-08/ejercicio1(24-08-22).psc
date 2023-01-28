Proceso ejercicio1
	
	Definir n Como Entero
	
	Escribir "Ingrese el tamaño de su arreglo"
	Leer n 
	Dimension v(n)
	
	Para i<-0 hasta n-1 Hacer
		v(i) <- Aleatorio(1,3)
		Escribir "[", v(i), "]" Sin Saltar
	FinPara
	
	bandera <- 0
	
	Para i<-0 hasta trunc((n-1)/2) Hacer
		Si v(i) <> v(n-1-i) Entonces
			bandera <- 1
			i <- n
		FinSi
	FinPara
	
	Si bandera = 1 Entonces
		Escribir " No es palíndromo"
	SiNo
		Escribir " Es palíndromo"
	FinSi
	
FinProceso
