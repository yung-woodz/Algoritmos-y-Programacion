Proceso ejercicio4
	
	Definir n Como Entero
	
	Escribir "Ingrese el tamaño de su matriz NxN"
	Leer n
	
	Dimension mat(n,n)
	Dimension v1(n), v2(n), v3(n), v4(n*n)
	
	Escribir "----------------------------------"
	
	Para i<-0 hasta n-1 Hacer
		suma <- 0
		Para j<-0 hasta n-1 Hacer
			mat(i,j) <- Aleatorio(1,9)
			suma <- suma + mat(i,j)
			v3(i) <- suma
			Escribir "[", mat(i,j), "]" Sin Saltar
			Si i = j Entonces // Diagonal Primaria
				v1(i) <- mat(i,j)
			FinSi
			Si i + j = (n-1) Entonces // Diagonal Secundaria
				v2(i) <- mat(i,j)
			FinSi
		FinPara
		Escribir " "
	FinPara
	
	Escribir "----------------------------------"
	Escribir "Problema A: "
	
	Para i<-0 hasta n-1 Hacer
		Escribir "[", v1(i), "]" Sin Saltar
	FinPara
	
	Escribir " "
	Escribir "----------------------------------"
	Escribir "Problema B: "
	
	Para i<-0 hasta n-1 Hacer
		Escribir "[", (v2(i) * 2), "]" Sin Saltar
	FinPara
	
	Escribir " "
	Escribir "----------------------------------"
	Escribir "Problema C: "
	
	Para i<-0 hasta n-1 Hacer
		Escribir "[", v3(i), "]" Sin Saltar
	FinPara
	
	Escribir " "
	Escribir "----------------------------------"
	Escribir "Problema D: "
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 Hasta n-1 Hacer
			v4(i) <- mat(i,j)
			Escribir "[", v4(i), "]" Sin Saltar
		FinPara
	FinPara
	
	Escribir " "
	Escribir "----------------------------------"
	
FinProceso
