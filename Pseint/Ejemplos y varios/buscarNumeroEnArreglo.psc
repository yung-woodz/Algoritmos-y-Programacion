Proceso buscarNumeroEnArreglo
	
	Definir x, i, n, contador Como Entero
	
	Leer n
	
	Dimension v(n)
	
	contador = 0
	
	Para i<-0 hasta n-1 Hacer
		v(i) <- Aleatorio(1,9)
	FinPara
	
	Escribir "Ingrese un valor a buscar"
	Leer x
	
	Para i<-0 hasta n-1 Hacer
		si x == v(i) Entonces
			contador <- contador + 1
		FinSi
	FinPara
	
	Si contador == 1 Entonces
		Escribir "El número ", x, " se repite ", contador, " vez"
	SiNo
		Escribir "El número ", x, " se repite ", contador, " veces"
	FinSi
	
FinProceso
