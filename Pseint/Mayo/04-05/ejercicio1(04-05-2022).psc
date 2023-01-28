Algoritmo ejercicio1
	
	Definir x, n, i, suma como real;
	
	Escribir "Ingrese la cantidad de elementos que quiere sumar"
	Leer n;
	
	i= 1
	suma = 0
	
	Mientras i <= n Hacer
		Escribir "Ingrese su elemento número ", i;
		Leer x;
		suma <- suma + x
		i = i + 1
	FinMientras
	
	Mostrar "El resultado de la suma es: ", suma;
	
FinAlgoritmo