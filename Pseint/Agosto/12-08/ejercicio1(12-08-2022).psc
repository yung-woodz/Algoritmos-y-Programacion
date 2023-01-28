Proceso ejercicio1
	
	Definir n, m Como Entero
	
	Escribir "Ingrese el tamaño de la matriz"
	Leer n, m
	
	Dimension matriz(n,m)
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta m-1 Hacer
			matriz(i,j) <- Aleatorio(1,9)
		FinPara
	FinPara
	
	Escribir "----------------------"
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta m-1 Hacer
			Escribir "[", matriz(i,j), "]" Sin Saltar
		FinPara
		Escribir " "
	FinPara
	
	Escribir "----------------------"
	
	suma= 0
	contador= 0
	contador1= 0
	resultado= 0
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta m-1 Hacer
			suma <- suma + matriz(i,j)
			contador <- contador + 1
		FinPara
	FinPara
	
	Escribir "La suma es: ", suma
	
	resultado <- suma / contador
	
	Escribir "----------------------"
	
	Escribir "El promedio es: ", resultado
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta m-1 Hacer
			Si resultado < matriz(i,j) Entonces
				contador1 <- contador1 + 1
			FinSi
		FinPara
	FinPara
	
	Escribir "----------------------"
	
	Escribir "Valores mayores a la del promedio: ", contador1
	
	Escribir "----------------------"

FinProceso
