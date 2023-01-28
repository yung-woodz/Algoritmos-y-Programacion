Proceso sistEcua
	
	Definir x1, y1, y1Divid, r1, r1Divid, x2, y2, y2Divid, r2, r2Divid, op, op2 Como Real
	Escribir "*-------------------------*"
	Escribir "|| SISTEMA DE ECUACIONES ||"
	Escribir "||         [2X2]         ||"
	Escribir "||       by: Dilan       ||"
	Escribir "*-------------------------*"
	
	Escribir "> Escoge el método a usar: "
	Escribir "*-------------------------*"
	Escribir "1. Método de igualación"
	Escribir "2. Método de sustitución"
	Escribir "3. Método de reducción"
	Escribir "4. Método de cramer"
	Escribir "*-------------------------*"
	
	Repetir
		Leer op
	Hasta Que op >= 1 y op <= 4
	
	Segun op Hacer
		1: 
			Escribir "*------------------------------------*"
			Escribir "Ingrese los valores de la ecuación (1)"
			Escribir "*------------------------------------*"
			
			Repetir
				Leer x1
			Hasta Que x1 >= 0 o x1 <= 0
			
			Definir signo1 Como Caracter
			
			Repetir
				Leer signo1
			Hasta Que signo1 == "+" o signo1 == "-"
			
			Repetir
				Leer y1
			Hasta Que y1 >= 0 o y1 <= 0
			
			Repetir
				Leer r1
			Hasta Que r1 >= 0 o r1 <= 0
			
			Si y1 < 0 Entonces
				Escribir "*------------------------------------*"
				Escribir "          ", x1, "x ", signo1, " (", y1, ")y = ", r1, " (1)"
				Escribir "*------------------------------------*"
			SiNo
				Escribir "*------------------------------------*"
				Escribir "          ", x1, "x ", signo1, " ", y1, "y = ", r1, " (1)"
				Escribir "*------------------------------------*"
			Fin Si
			
			Escribir " "
			Escribir "*------------------------------------*"
			Escribir "Ingrese los valores de la ecuación (2)"
			Escribir "*------------------------------------*"
			
			Repetir
				Leer x2
			Hasta Que x2 >= 0 o x2 <= 0
			
			Definir signo2 Como Caracter
			
			Repetir
				Leer signo2
			Hasta Que signo2 == "+" o signo2 == "-"
			
			Repetir
				Leer y2
			Hasta Que y2 >= 0 o y2 <= 0
			
			Repetir
				Leer r2
			Hasta Que r2 >= 0 o r2 <= 0
			
			Si y2 < 0 y y1 < 0 Entonces
				Escribir " "
				Escribir "*------------------------------------*"
				Escribir "          ", x1, "x ", signo1, " (", y1, ")y = ", r1, " (1)"
				Escribir "          ", x2, "x ", signo2, " (", y2, ")y = ", r2, " (2)"
				Escribir "*------------------------------------*"
			Fin Si
			
			Si y2 > 0 y y1 > 0 Entonces
				Escribir " "
				Escribir "*------------------------------------*"
				Escribir "           ", x1, "x ", signo1, " ", y1, "y = ", r1, "  (1)"
				Escribir "           ", x2, "x ", signo2, " ", y2, "y = ", r2, "  (2)"
				Escribir "*------------------------------------*"
			FinSi
			
			Si y2 < 0 y y1 > 0 Entonces
				Escribir " "
				Escribir "*------------------------------------*"
				Escribir "          ", x1, "x   ", signo1, "  ", y1, "y = ", r1, "   (1)"
				Escribir "          ", x2, "x ", signo2, " (", y2, ")y = ", r2, "   (2)"
				Escribir "*------------------------------------*"
			Fin Si
			
			Si y2 > 0 y y1 < 0 Entonces
				Escribir " "
				Escribir "*------------------------------------*"
				Escribir "          ", x1, "x ", signo1, " (", y1, ")y = ", r1, "   (1)"
				Escribir "          ", x2, "x   ", signo2, "  ", y2, "y = ", r2, " (2)"
				Escribir "*------------------------------------*"
			FinSi
			
			Escribir "> Escoge una variable para despejar: "
			Escribir "*------------------------------------*"
			Escribir "                 1. X"
			Escribir "                 2. Y"
			Escribir "*------------------------------------*"
			
			Repetir
				Leer op2
			Hasta Que op2 = 1 o op2 = 2
			
			Segun op2 Hacer
				1: /// Variable X
					Si y1 > 0 Entonces
						Escribir "*------------------------------------*"
						Escribir "             Ecuación (1)"
						Escribir "        vvvvvvvvvvvvvvvvvvvvv     "
						Escribir " "
						Escribir "          ", x1, "x ", signo1, " ", y1, "y = ", r1 " /-", y1, "y"
						Escribir "               ", x1, "x ", "= ", r1, " - ", y1, "y /:", x1
						
						// *-------Operación-------*
						
						Si (r1 % x1 = 0) y (y1 % x1 = 0) Entonces
							
							r1Divid <- r1 / x1
							y1Divid <- y1 / x1
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||             ", " x ", "= ", r1Divid, " - ", y1Divid, "y          ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r1 % x1 = 0) y (y1 % x1 <> 0) Entonces
							
							r1Divid <- r1 / x1
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||                  ", "  ", y1, "             ||"
							Escribir "||          ", "x ", "= " r1Divid, " -" " --- y          ||"
							Escribir "||                    ", x1           "             ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r1 % x1 <> 0) y (y1 % x1 = 0) Entonces
							
							y1Divid <- y1 / x1
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||              ", " ", r1, "                  ||"
							Escribir "||          ", "x ", "= "  "--- - " , y1Divid,"y            ||"
							Escribir "||               ", x1           "                  ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r1 % x1 <> 0) y (y1 % x1 <> 0) Entonces
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||               ", r1, " - ", y1, "y             ||"
							Escribir "||         ", "x ", "= ----------           ||"
							Escribir "||                 ", x1           "                ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
					FinSi
					
					Si y1 < 0 Entonces
						Escribir "*------------------------------------*"
						Escribir "             Ecuación (1)"
						Escribir "        vvvvvvvvvvvvvvvvvvvvv     "
						Escribir " "
						Escribir "          ", x1, "x ", signo1, " ", y1, "y = ", r1 " /+", y1, "y"
						Escribir "               ", x1, "x ", "= ", r1, " + ", y1, "y /:", x1
						
						// *-------Operación-------*
						
						Si (r1 % x1 = 0) y (y1 % x1 = 0) Entonces
							
							r1Divid <- r1 / x1
							y1Divid <- y1 / x1
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||             ", " x ", "= ", r1Divid, " + ", y1Divid, "y          ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r1 % x1 = 0) y (y1 % x1 <> 0) Entonces
							
							r1Divid <- r1 / x1
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||                  ", "  ", y1, "             ||"
							Escribir "||          ", "x ", "= " r1Divid, " +" " --- y          ||"
							Escribir "||                    ", x1           "             ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r1 % x1 <> 0) y (y1 % x1 = 0) Entonces
							
							y1Divid <- y1 / x1
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||              ", " ", r1, "                  ||"
							Escribir "||          ", "x ", "= "  "--- + " , y1Divid,"y            ||"
							Escribir "||               ", x1           "                  ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r1 % x1 <> 0) y (y1 % x1 <> 0) Entonces
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||               ", r1, " + ", y1, "y             ||"
							Escribir "||         ", "x ", "= ----------           ||"
							Escribir "||                 ", x1           "                ||"
							Escribir "*------------------------------------*"
							
						FinSi
					FinSi
					
					// Escuación 2
					
					Si y2 > 0 Entonces
						Escribir "*------------------------------------*"
						Escribir "             Ecuación (2)"
						Escribir "        vvvvvvvvvvvvvvvvvvvvv     "
						Escribir " "
						Escribir "          ", x2, "x ", signo2, " ", y2, "y = ", r2 " /-", y2, "y"
						Escribir "               ", x2, "x ", "= ", r2, " - ", y2, "y /:", x2
						
						// *-------Operación-------*
						
						Si (r2 % x2 = 0) y (y2 % x2 = 0) Entonces
							
							r2Divid <- r2 / x2
							y2Divid <- y2 / x2
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||             ", " x ", "= ", r2Divid, " - ", y2Divid, "y          ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r2 % x2 = 0) y (y2 % x2 <> 0) Entonces
							
							r2Divid <- r2 / x2
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||                  ", " ", y2, "              ||"
							Escribir "||          ", "x ", "= " r2Divid, " -" " --- y           ||"
							Escribir "||                   ", x2           "              ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r2 % x2 <> 0) y (y2 % x2 = 0) Entonces
							
							y2Divid <- y2 / x2
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||              ", " ", r2, "                  ||"
							Escribir "||          ", "x ", "= "  "--- - " , y2Divid,"y            ||"
							Escribir "||               ", x2           "                  ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r2 % x2 <> 0) y (y2 % x2 <> 0) Entonces
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||               ", r2, " - ", y2, "y             ||"
							Escribir "||         ", "x ", "= ----------           ||"
							Escribir "||                 ", x2           "                ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
					FinSi
					
					Si y2 < 0 Entonces
						Escribir "*------------------------------------*"
						Escribir "             Ecuación (2)"
						Escribir "        vvvvvvvvvvvvvvvvvvvvv     "
						Escribir " "
						Escribir "          ", x2, "x ", signo2, " ", y2, "y = ", r2 " /+", y2, "y"
						Escribir "               ", x2, "x ", "= ", r2, " + ", y2, "y /:", x2
						
						// *-------Operación-------*
						
						Si (r2 % x2 = 0) y (y2 % x2 = 0) Entonces
							
							r2Divid <- r2 / x2
							y2Divid <- y2 / x2
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||             ", " x ", "= ", r2Divid, " + ", y2Divid, "y          ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r2 % x2 = 0) y (y2 % x2 <> 0) Entonces
							
							r2Divid <- r2 / x2
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||                  ", " ", y2, "              ||"
							Escribir "||          ", "x ", "= " r2Divid, " +" " --- y           ||"
							Escribir "||                   ", x2           "              ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r2 % x2 <> 0) y (y2 % x2 = 0) Entonces
							
							y2Divid <- y2 / x2
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||              ", " ", r2, "                  ||"
							Escribir "||          ", "x ", "= "  "--- + " , y2Divid,"y            ||"
							Escribir "||               ", x2           "                  ||"
							Escribir "*------------------------------------*"
							
						FinSi
						
						Si (r2 % x2 <> 0) y (y2 % x2 <> 0) Entonces
							
							Escribir " "
							Escribir "*------------------------------------*"
							Escribir "||               ", r2, " + ", y2, "y             ||"
							Escribir "||         ", "x ", "= ----------           ||"
							Escribir "||                 ", x2           "                ||"
							Escribir "*------------------------------------*"
							
						FinSi
					FinSi
					
				2:
					
			FinSegun
			
	FinSegun
	
	
FinProceso
