Algoritmo Vector
	Escribir "TAMAÑO DEL VECTOR : "
    Leer N	
    Dimension vec[N]
    Para f = 1 Hasta N Con Paso 1 Hacer
        vec[f] = Azar(50)
        Escribir Sin Saltar vec[f], " "
    FinPara
    Escribir " "
    Escribir " "
    Escribir "NÚMERO PRIMOS"
    Para f = 1 Hasta N Con Paso 1 Hacer
        r = 0;		
        Para p = 1 Hasta vec[f] Con Paso 1 Hacer
            Si (vec[f] MOD p == 0) Entonces
                r = r + 1
            FinSi					
        FinPara				
        Si (r == 2) Entonces
            Escribir Sin Saltar vec[f], " "
            suma = suma + 1
        FinSi		
    FinPara
    Escribir " "
    Escribir " "	
    Escribir "TOTAL DE NÚMERO PRIMOS : ", suma
    Escribir " "
FinAlgoritmo
