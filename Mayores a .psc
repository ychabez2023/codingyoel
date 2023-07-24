Algoritmo Mayores
	Dimension arreglo(10)
	Para fila=1 Hasta 10 Con Paso 1 Hacer
		Escribir "valor",fila,"/10 :"
		Leer arreglo(fila)
	Fin Para
	Escribir " "
	Escribir "*************************************"
	Escribir "Ingrese un Número :"
	Leer  num
	Escribir " "
	Escribir "**************************************"
	Escribir Sin Saltar "Los elementos mayores que  ",num, "son:" 
	Para fila = 1 Hasta 10 Con Paso 1 Hacer
		Si (arreglo(fila) > num) Entonces
			Escribir Sin Saltar arreglo(fila), ","
		FinSi
	Fin Para
	Escribir " "
	
FinAlgoritmo
