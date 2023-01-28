Algoritmo ejercicio2
	
	Definir n, par, impar, sumaDePares, sumaDeImpares, resultado Como Real;
	
	Escribir "Ingrese un numero para sumar todos su pares e impares: ";
	Leer n;
	
	par <- 2 * n
	impar <- 1 + 2*(n-1)
	
	sumaDePares <- (n/2)*(2+par);
	
	Mostrar "La suma de pares es igual a: ", sumaDePares;
	
	sumaDeImpares <- (n/2)*(1+impar);
	
	Mostrar "La suma de impares es igual a: ", sumaDeImpares;
	
	
	
FinAlgoritmo
	