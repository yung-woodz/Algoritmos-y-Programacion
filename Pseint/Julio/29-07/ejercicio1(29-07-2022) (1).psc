Proceso ejercicio
	
	Definir n, i, j, aux Como Entero
	
	Repetir
		Escribir "Ingrese la cantidad de adultos para ver sus edades: "
		Leer n
	Hasta Que n > 0
	
	Dimension v(n)
	Escribir "Edades: "
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		v(i) <- Aleatorio(1, 100)
		Escribir v(i)
	FinPara
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		
		Para j<-1 hasta n-1 Con Paso 1 Hacer
			Si v(i) < v(j) Entonces
				aux <- v(i)
				v(i) <- v(j)
				v(j) <- aux
			FinSi
			mostrar j
		FinPara
		
	FinPara
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		Escribir "[", v(i), "]" Sin Saltar
	FinPara
	
	mayor= v(0)
	menor= v(0)
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		
		Si v(i) < mayor Entonces
			mayor <- v(i)
		FinSi
		
		Si v(i) > menor Entonces
			menor <- v(i)
		FinSi
		
	FinPara
	
	contador= 0
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		Si v(i) >= 80 Entonces
			contador <- contador + 1
		FinSi
	FinPara
	
	Escribir "Gente menor: ", mayor
	Escribir "Gente mayor: ", menor
	Escribir "Gente mayor o igual a 80 años: ", contador
	
FinProceso
