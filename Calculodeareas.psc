Funcion triangulo()
			Escribir "Ingresar la base y altura del triangulo "
			Leer a,b
			Escribir "El área del triangulo es: ", (a*b)/2
FinFuncion

Funcion cuadrado()
		Escribir "Ingresar el valor de los lados del cuadrado"
		Leer a
		Escribir "El area del cuadrado es: ", a*a

FinFuncion

Funcion rectangulo()
	Escribir "	Ingresar la base y altura del rectángulo"
	Leer a,b
	Escribir "El area del rectángulo es: ", a*b
FinFuncion

Funcion circulo()
	Escribir "Ingresar el radio del circulo"
	Leer r
	Escribir "El area del circulo es: ", (3.1416*(r*r))
FinFuncion

Algoritmo Calculodeareas
	ejec = Verdadero
	Definir comand Como Entero
	Mientras (ejec == Verdadero) Hacer
		Escribir "************************************************"
		Escribir "+++++++++++++Elije en el menú+++++++++++++++++++"
		Escribir "************************************************"
		Escribir "(1) Area de un triangulo"
		Escribir "(2) Area de un cuadrado"
		Escribir "(3) Area de un rectangulo"
		Escribir "(4) Area de un circulo"
		Escribir "(5) Salir"
		Leer comand
		Segun comand Hacer
			1:
				triangulo
			2:
				cuadrado
			3:
				rectangulo
			4:
				circulo
			5:
				ejec = Falso
			De Otro Modo:
				Escribir comand, "comando no valido"
		FinSegun
		Escribir ""
		Escribir ""
	FinMientras
FinAlgoritmo
