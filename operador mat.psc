Algoritmo operador
	Definir num1,num2 Como Entero
	Escribir "*********************************************************"
	Escribir "Ingrese Primer Número"
	Leer num1
	Escribir "*********************************************************"
	Escribir "Ingrese segundo Número"
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
			Escribir "Multiplicación:", (num1 * num2)
		"/":
			Escribir  "División : ", (num1 / num2)
		De Otro Modo:
			Escribir "*************************************************"
			Escribir "Operador Incorrecto"
	FinSegun
FinAlgoritmo
