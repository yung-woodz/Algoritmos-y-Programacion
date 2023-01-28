Algoritmo ejercicio3
	
	Definir n, edad, mayor, menor, i, u Como Entero;
	Repetir
		Escribir "Ingrese la cantidad de Edades"
		Leer n
	Hasta Que n >0
	
	Repetir
		Escribir "Ingrese la edad a buscar"
		Leer u
	Hasta Que u >= 0 y u <= 110
	
	edad <- 0
	mayor <- -9999
	menor <- 9999
	m= 0
	
	Dimension A[n];
	
	Escribir "Las edades del arreglo son: "
	
	Para i <- 1 Hasta n con paso 1 Hacer
		A[edad] <- Aleatorio(0, 110)
		Si mayor < A[edad] Entonces
			mayor <- A[edad]
		SiNo
			Si menor > A[edad] Entonces
				menor <- A[edad]
			FinSi
			Si A[edad] == u Entonces
				m <- m + 1
			FinSi
		FinSi
		Escribir "El lugar [", i, "] lo ocupa la edad ", A[edad];
	FinPara
	
	Mostrar "El mayor es: ", mayor;
	Mostrar "El menor es: ", menor;
	Mostrar m, " son iguales a ", u;
	
FinAlgoritmo
	