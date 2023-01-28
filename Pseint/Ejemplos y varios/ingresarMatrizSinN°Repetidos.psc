Proceso sin_titulo
	
	Definir n Como Entero
	Definir vacio Como Caracter
	
	Leer n
	
	Dimension mat(n,n)
	
	m <- 0
	m <- n*n
	
	Dimension v(m)
	
	vacio <- " "
	contador1 <- 0
	contador2 <- 0
	
	Para k<-0 hasta m - 1 Hacer
		v(k) <- vacio
	FinPara
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta n-1 Hacer
			Escribir "Ingrese un valor para la posición (", i+1,"," j+1, ")"
			Leer mat(i,j)
			
			contador2 <- contador2 + 1
			
			Si contador1 >= 1 Entonces
				Para k<-0 Hasta j Con Paso 1 Hacer
					
					Si v(k) == mat(i,j) Entonces
						Repetir
							Escribir "No se puede repetir valores"
							Leer mat(i,j)
						Hasta Que v(k) <> mat(i,j)
					FinSi
					
					Si contador2 == n Entonces
						Para l<-0 Hasta j Con Paso 1 Hacer
							Si v(l) == mat(i,j) Entonces
								Repetir
									Escribir "No se puede repetir valores"
									Leer mat(i,j)
								Hasta Que v(l) <> mat(i,j)
							FinSi
						Fin Para
					FinSi
					
				Fin Para
			Fin Si
			
			Para k<-j hasta j Hacer
				v(k) <- mat(i,j)
			FinPara
			
			contador1 <- contador1 + 1
			
			
		FinPara
	FinPara
	
	Para i<-0 Hasta n-1 Hacer
		Para j<-0 hasta n-1 Hacer
			Escribir "[", mat(i,j), "]" Sin Saltar
		FinPara
		Escribir " "
	FinPara
	
FinProceso