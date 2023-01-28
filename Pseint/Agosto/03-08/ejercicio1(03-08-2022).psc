Proceso ejercicio1
	
	Definir x, n, f, resultado Como Real
	
	Escribir "Ingrese un valor par o impar"
	Leer x
	
	Si x < 0 Entonces
		n <- x * (-1)
		Si n % 2 = 0 Entonces
			Repetir
				Escribir "Ingrese un número par positivo"
				Leer x
			Hasta Que x > 0
		FinSi
	FinSi
	
	f=1
	
	Si x < 0 Entonces
		n <- x * (-1)
		Si n % 2 = 1 Entonces
			resultado <- (2*x)^n
			Escribir "El resultado es: ", resultado
		SiNo
			Para i<-1 Hasta x Con Paso 1 Hacer
				f <- f*i
			FinPara
			Escribir f
		FinSi
	FinSi
	
FinProceso
