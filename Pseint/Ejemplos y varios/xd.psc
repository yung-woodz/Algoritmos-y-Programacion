Proceso xd
	
	Definir n como entero 
	Leer n
	
	Dimension v(n)
	
	Para i<-0 hasta n-1 Hacer
		v(i) <- Aleatorio(1,50)
		Escribir v(i)
	FinPara
	
	menor<-v(0)
	mayor<-v(0)
	
	Para i<-0 hasta n-1 Hacer
		Si v(i) > mayor Entonces
			mayor <- v(i)
		FinSi
		Si v(i) < menor Entonces
			menor <- v(i)
		FinSi
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
	
	Escribir "------------------------------"
	
	Para i<-0 hasta n-1 Hacer
		Escribir v(i)
	FinPara
	
	Escribir "Mayor y menor: " mayor, " ", menor
	
	Escribir "------------------------------"
	
	Escribir "Ingrese un numero que desea buscar"
	Leer nro
	
	contador<-0
	
	Para i<-0 hasta n-1 Hacer
		Si v(i) == nro Entonces
			contador <- contador + 1
		FinSi
	FinPara
	
	Escribir "El numero ", nro, " aparece ", contador, " vez (veces)"
	
FinProceso
