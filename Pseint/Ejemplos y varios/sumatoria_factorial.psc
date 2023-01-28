Algoritmo sumatoria
	
	Definir i, f, n, s Como Real;
	
	Leer n;
	
	s= 0
	i= 1
	f= 1
	
	Para i <- 1 hasta (2*i-1) con paso 1
		f <- 1
		Para k <- i Hasta n Con Paso 1
			f <- f * k
		FinPara
		s <- s+f
	FinPara
	
	
	
	Escribir s;
	
FinAlgoritmo
