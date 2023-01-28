Proceso ejercicio17
	Definir a,b,c Como Real
	Escribir 'Escriba 3 números para ver cúal es el mayor entre ellos'
	Leer a,b,c
	
	Si a == b Entonces
		Si a>b Entonces
			Si a>c Entonces
				Escribir a
				Si a==b Entonces
					Escribir a
				SiNo
					Si a==c Entonces
						Escribir c
					FinSi
				FinSi
			SiNo
				Si a<c Entonces
					Escribir c
				FinSi
			FinSi
		SiNo
			Si a<b Entonces
				Si b>c Entonces
					Escribir b
				SiNo
					Escribir c
				FinSi
			FinSi
		FinSi
	FinSi
	
FinProceso
