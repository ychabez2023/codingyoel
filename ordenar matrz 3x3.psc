Algoritmo ordenar
Dimension matrix(3,6)
	cont = 1 
	n = 1
Para f = 1 Hasta 3 Con Paso 1 Hacer
Para c = 1 hasta 3 con paso 1 Hacer
			Escribir "Ingresar valor", cont, "/12 :"
			Leer matrix(f,c)
			cont<- cont + 1
			
FinPara
Fin Para
Para m = 1 hasta 3 con paso 1 Hacer
Para n = 1 hasta 3 con paso 1 Hacer
Para f = 1 hasta 3 con paso 1 Hacer
Para c = 1 Hasta 3 con paso 1 Hacer
		Si matrix(m,n) < matrix(f,c) Entonces
			temp = matrix(m,n)
			matrix(m,n) = matrix(f,c)
			matrix(f,c) = temp
FinSi
FinPara
FinPara
FinPara
FinPara
Para f = 1 hasta 3 con paso 1 Hacer
Escribir matrix(f,1) , " ", matrix(f,2) , " ", matrix(f,3) 
FinPara
FinAlgoritmo
