Proceso sin_titulo
	
	Definir n, a, b, c, i Como Entero
	
	Repetir
		Escribir "Ingrese el largo del arreglo"
		Leer n
	Hasta Que n > 1
	
	Dimension v(n)
	
	a<-1
	b<-0
	c<-1
	
	Para i<-0 hasta n-1 Hacer
		v(i) <- c
		Escribir v(i)
		a<-b
		b<-c
		c<- a + b
	FinPara
	
FinProceso
