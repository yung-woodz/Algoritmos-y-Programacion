Algoritmo ejercicio9
	
	Definir a, b, c Como Real;
	
	Escribir "Ingrese tres n�meros para comparar";
	Leer a, b, c;
	
	Si a > b Entonces
		Si a > c Entonces
			Mostrar "El n�mero mayor es: ", a;
		SiNo
			Mostrar "El n�mero mayor es: ", b;
		FinSi
	SiNo
		Si b > c Entonces
			Mostrar "El n�mero mayor es: ", b;
		SiNo
			Mostrar "El n�mero mayor es: ", c;
		FinSi
	FinSi
	
FinAlgoritmo
	