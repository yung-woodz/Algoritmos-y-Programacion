Proceso ejercicio15
	
	Definir lado1, lado2, lado3 como entero;
	
	Repetir
		Escribir "Ingrese los lados de su triangulo";
		Leer lado1, lado2, lado3;
	Hasta Que lado1 > 0 y lado2 > 0 y lado3 > 0;
	
	Si (lado1+lado2) > lado3 y (lado1+lado3) > lado2 y (lado2+lado3) > lado1 Entonces
		Si (lado1 == lado2) y (lado2 == lado3) y (lado1 == lado3) Entonces
			Mostrar "Es un triangulo equilatero";
		SiNo
			Si (lado1 <> lado2) y (lado2 <> lado3) y (lado1 <> lado3) Entonces
				Mostrar "Es un triangulo escaleno";
			SiNo
				Si (lado1 == lado2) o (lado2 == lado3) o (lado1 == lado3) Entonces
					Mostrar "Es un triangulo isosceles";
				FinSi
			FinSi
		FinSi
	SiNo
		Mostrar "No corresponde a un triangulo";
	FinSi
	
FinProceso