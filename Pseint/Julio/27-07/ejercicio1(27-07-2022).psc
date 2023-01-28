Proceso ejercicio1
	
	Definir n como entero;
	
	Repetir
		Escribir "Ingrese número de productos"
		Leer n
	Hasta Que n>0
	
	Dimension p(n)
	suma= 0
	
	Para i<-0 hasta n-1 Con Paso 1 Hacer
		
		p(i) <- Aleatorio(600, 200000)
		suma <- suma + p(i)
		Escribir "El producto ", i+1, " tiene un precio de: " "$", p(i)
		
	FinPara
	
	promedio <- suma / n
	Escribir "El promedio de los precios es: " "$", redon(promedio)
	
FinProceso
