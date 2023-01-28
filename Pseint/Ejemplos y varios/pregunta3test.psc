Algoritmo pregunta3test
	
	Definir valorNeto, iva, valorBruto Como Entero;
	
	Repetir
		Escribir "Ingrese el valor neto (precio sin iva)";
		Leer valorNeto;
	Hasta Que valorNeto >= 180
	
	Mostrar "Valor Neto: ", valorNeto;
	
	iva <- redon(valorNeto * 0.19)
	
	Mostrar "IVA: ", iva;
	
	valorBruto <- valorNeto + iva
	
	Mostrar "Valor Bruto: ", valorBruto;
	
	
FinAlgoritmo
	