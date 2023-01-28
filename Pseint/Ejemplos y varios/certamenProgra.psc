Proceso sin_titulo
	
	Definir n Como Entero
	
	Leer n
	
	Dimension a(n), b(n)
	
	Para i<-0 hasta n-1 Hacer
		a(i) <- Aleatorio(0,1)
		Escribir "[", a(i), "]" Sin Saltar
	FinPara
	
	Escribir " "
	Escribir "--------------------"
	
	Para j<-0 hasta n-1 Hacer
		b(j) <- Aleatorio(0,1)
		Escribir "[", b(j), "]" Sin Saltar
	FinPara
	
	Escribir " "
	Escribir "--------------------"
	
	flag1 <- 0
	flag2 <- 0
	
	Para i<-0 hasta n-1 Hacer // Identicos
		Si a(i) == b(i) Entonces
			flag1 <- flag1 + 1
		FinSi
	FinPara
	
	Para i<-0 hasta n-1 Hacer // 
		Si a(i) == b(i) Entonces
			flag2 <- flag2 + 1
		FinSi
	FinPara
	
	si n % 2 = 0 Entonces // Semejantes
        semejante <- n * 0.75
    SiNo
        semejante <- (n/2) + 0.5
    FinSi
	
	si n % 2 = 0 Entonces // Mitad
        mitad <- n * 0.5
    SiNo
        mitad <- (n/2) + 0.5
    FinSi
	
	Escribir semejante
	Escribir mitad
	
	Si flag1 == n Entonces
		Escribir "Son identicos"
	SiNo
		Si flag2 == semejante Entonces
			Escribir "Son semejantes"
		FinSi
	FinSi
	
FinProceso
