Algoritmo operador
	Definir num1,num2 Como Entero
	Escribir "*********************************************************"
	Escribir "Ingrese Primer N�mero"
	Leer num1
	Escribir "*********************************************************"
	Escribir "Ingrese segundo N�mero"
	Leer num2
	Escribir "*********************************************************"
	Escribir "Ingrese operador"
	Leer opd
	Segun opd Hacer
		"+":
			Escribir "Suma: ", (num1 + num2)
		"-":
			Escribir "Resta :", (num1 - num2)
		"*":
			Escribir "Multiplicaci�n:", (num1 * num2)
		"/":
			Escribir  "Divisi�n : ", (num1 / num2)
		De Otro Modo:
			Escribir "*************************************************"
			Escribir "Operador Incorrecto"
	FinSegun
FinAlgoritmo
