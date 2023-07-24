Algoritmo TareaClasificar
	definir x,n,neutros,positvos,negativos Como Entero
	neutros=0
	positvos=0
	negativos=0
	Para x=1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese un numero"
		leer n
		si n = 0 Entonces
			neutros = neutros + 1
		SiNo
			Si n<0 Entonces
				negativos= negativos + 1 
			SiNo
				positivos = positivos + 1
			FinSi
		FinSi
	Fin Para
	Escribir "Los numeros neutros son:", neutros
	Escribir "Los numeros positivos son:", positivos
	Escribir "Los numeros negativos son:", negativos

	
FinAlgoritmo
