Algoritmo ejercicio5
	
	Definir x1, y1, x2, y2, m Como real;
	
	Escribir "Ingrese los valores de (x1,y1)";
	Leer x1, y1;
	
	Escribir "Ingrese los valores de (x2,y2)";
	Leer x2, y2;
	
	m <- (y2-y1)/(x2-x1);
	
	Si x2-x1 == 0 Entonces
		Escribir "No se puede dividir entre 0";
	SiNo
		Escribir "La pendiente de la recta es: ", m;
	FinSi
	
FinAlgoritmo
	