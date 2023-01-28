Algoritmo ejercicio4
	
	Definir n, nota, mayor, menor, i, j, k, l, u, promedio, suma Como Real;
	Repetir
		Escribir "Ingrese la cantidad de nota"
		Leer n
	Hasta Que n > 0
	
	Repetir
		Escribir "Ingrese la nota a buscar"
		Leer u
	Hasta Que u >= 1 y u <= 7
	
	nota <- 0
	mayor <- -9999
	menor <- 9999
	m= 0
	suma= 0
	j= 0
	k= 0
	l= 0
	
	Dimension A[n];
	
	Escribir "Las notas del arreglo son: "
	
	Para i <- 1 Hasta n con paso 1 Hacer
		A[nota] <- Aleatorio(10, 70)
		A[nota] <- A[nota]/10
		suma <- A[nota] + suma
		promedio <- suma / n
		
		// cantidad de notas mayores o iguales al promedio
		Si A[nota] > promedio Entonces
			j <- j + 1
		SiNo
			Si A[nota] == promedio Entonces
				k <- k + 1
			FinSi
		FinSi
		
		//cantidad de notas reprobadas
		Si A[nota] < 4 Entonces
			l <- l + 1
		FinSi
		
		Si mayor < A[nota] Entonces
			mayor <- A[nota]
		SiNo
			Si menor > A[nota] Entonces
				menor <- A[nota]
			FinSi
			Si A[nota] == u Entonces
				m <- m + 1
			FinSi
		FinSi
		Escribir "El lugar [", i, "] lo ocupa la nota ", A[nota];
	FinPara
	
	Si l == 1 Entonces
		Mostrar "El número de notas bajo 4 es: ", l;
	SiNo
		Mostrar "El número de notas bajo 4 son: ", l;
	FinSi
	
	Mostrar "El promedio de la N cantidad de notas es: ", promedio;
	Mostrar "El mayor es: ", mayor;
	Mostrar "El menor es: ", menor;
	Mostrar m, " son iguales a ", u;
	
FinAlgoritmo