Algoritmo matrz
	Dimension matrix(4,5)
	num = 1
	Para f = 1 Hasta 4 Con Paso 1 Hacer
		Para c = 1 Hasta 5 con paso 1 Hacer
			matrix(f,c) = num
			num<-num + 1
		FinPara
	Fin Para
	Escribir "************************************"
	Escribir "--Ingresar un Número del 1 al 20 :--"
	Escribir "************************************"
	Leer num
	Escribir ""
	Si num >= 1 y num <= 20 Entonces
		Para f = 1 Hasta 4 con paso 1 Hacer
			Escribir matrix(f,1) ," ", matrix(f,2) ," ", matrix(f,3) , " ",  matrix(f,4) ," ",  matrix(f,5)
		FinPara
		Escribir ""
		Para f = 1 Hasta 4 con paso 1 Hacer
			Para c = 1 Hasta 5 Con Paso 1 Hacer
				Si matrix(f,c) = num Entonces
					Escribir "Posición(",f,",",c,")"
				FinSi
			FinPara
		FinPara
	FinSi
	
FinAlgoritmo
