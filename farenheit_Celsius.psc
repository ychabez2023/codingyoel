Funcion celsiusfarenheit()
	Escribir "***************************"
	Escribir "   -- celsius a farenheit --  "
	Escribir "***************************"
	Escribir "Ingrese el valor en celsius"
	Leer num
	farenheit<-(num*9/5) + 32
	Escribir "El valor en farenheit es: ", farenheit
FinFuncion

Funcion farenheitcelsius()
	Escribir "*****************************"
	Escribir "   -- farenheit a celsius --    "
	Escribir "*****************************"
	Escribir "Ingrese el valor en farenheit"
	leer num
	celsius<-(num - 32)*(5/9)
	Escribir "El valor en celsius es: ", celsius
FinFuncion

Algoritmo farenheit_Celsius
	ejec = Verdadero
	Definir comand Como Entero
	Mientras (ejec == Verdadero) Hacer
		Escribir "************************************"
		Escribir "********** -- Opciones -- **********"
		Escribir "***********--**********--***********"
		Escribir "1- celsius a farenheit."
		Escribir "2- farenheit a celsius."
		Escribir "0- SALIR."
		Leer comand 
		Segun comand Hacer
			1: 
				celsiusfarenheit()
				
			2:
				farenheitcelsius()
			0:
				ejec = falso
				
			De Otro Modo:
				Escribir comand "comando no válido"
		FinSegun
		Escribir " "
		Escribir " "
		FinMientras
FinAlgoritmo
