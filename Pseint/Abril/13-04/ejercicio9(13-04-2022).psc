Algoritmo ejercicio9
	
	Definir a, b, c Como Real;
	
	Escribir "Ingrese tres números para comparar";
	Leer a, b, c;
	
	Si a > b Entonces
		Si a > c Entonces
			Mostrar "El número mayor es: ", a;
		SiNo
			Mostrar "El número mayor es: ", b;
		FinSi
	SiNo
		Si b > c Entonces
			Mostrar "El número mayor es: ", b;
		SiNo
			Mostrar "El número mayor es: ", c;
		FinSi
	FinSi
	
FinAlgoritmo
	