Proceso ejercicio2
	
	Definir n Como Entero
	
	Repetir
		Escribir "Ingrese el valor de la matriz (impar)"
		Leer n
	Hasta Que n % 2 = 1
	
	Dimension matriz(n,n)
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 Hasta n-1 Hacer
			matriz(i,j) <- Aleatorio(1,9)
		FinPara
	FinPara
	
	Escribir "----------------------"
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 Hasta n-1 Hacer
			Escribir "[", matriz(i,j), "]" Sin Saltar
		FinPara
		Escribir " "
	FinPara
	
	Escribir "----------------------"
	
	centro= 0
	
	centro <- n / 2
	centro1 <- trunc(centro)
	
	Escribir "El centro es: " matriz(centro1, centro1)
	
	Escribir "----------------------"
	
	arriba <- matriz(centro1-1,centro1)
	abajo <- matriz(centro1+1,centro1)
	izquierda <- matriz(centro1,centro1-1)
	derecha <- matriz(centro1,centro1+1)
	esquiIzq1 <- matriz(centro1-1,centro1-1)
	esquiDere1 <- matriz(centro1-1,centro1+1)
	esquiIzq2 <- matriz(centro1+1,centro1-1)
	esquiDere2 <- matriz(centro1+1,centro1+1)
	
	Escribir "Arriba: ", arriba," Abajo: ", abajo
	Escribir "Izquierda: ", izquierda ," Derecha: ", derecha
	
	Escribir "----------------------"
	
	Escribir "Esquina superior Izquierda: ", esquiIzq1
	Escribir "Esquina superior derecha: ", esquiDere1
	Escribir "Esquina inferior Izquierda: ", esquiIzq2
	Escribir "Esquina inferior derecha: ", esquiDere2
	
	Escribir "----------------------"
	
	contador= 0
	
	Si centro1 > arriba Entonces
		contador <- contador + 1
	FinSi
	
	Si centro1 > abajo Entonces
		contador <- contador + 1
	FinSi
	
	Si centro1 > izquierda Entonces
		contador <- contador + 1
	FinSi
	
	Si centro1 > derecha Entonces
		contador <- contador + 1
	FinSi
	
	Si centro1 > esquiIzq1 Entonces
		contador <- contador + 1
	FinSi
	
	Si centro1 > esquiDere1 Entonces
		contador <- contador + 1
	FinSi
	
	Si centro1 > esquiIzq2 Entonces
		contador <- contador + 1
	FinSi
	
	Si centro1 > esquiDere2 Entonces
		contador <- contador + 1
	FinSi
	
	Escribir "Cantidad de valores menores que el centro: ", contador
	
FinProceso
