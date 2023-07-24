Algoritmo Invertido
	Escribir "**************************  ¡HOLA!  *************************************************"
	Escribir "Ingresar Número :"
	Leer num
	sw = 0
	cont = 1
	Si num < 10 Entonces
		Escribir num
	SiNo
		Mientras sw = 0 Hacer
			Si num > (cont * 10) Entonces
				cont = cont * 10
			SiNo
				sw = 1
			FinSi
		FinMientras
		x = 1
		Mientras num > 10 Hacer
			r = num mod cont
			d = (num - r) / cont
			suma = (d * x) + suma
			x = x * 10
			num = r
			cont = cont / 10
		FinMientras
		Escribir (x * r) + suma
		Escribir "******************************************************************"
	FinSi
FinAlgoritmo
