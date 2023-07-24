Algoritmo nacimiento
	Escribir Sin Saltar "Dia de Nacimiento"
	leer d
	Escribir Sin Saltar "Mes de Nacimiento"
	leer m
	Escribir Sin Saltar "Año de Nacimiento"
	leer a
	Escribir ""
	Escribir Sin Saltar "Dia Actual : "
	leer df
	Escribir Sin Saltar "Mes Actual : "
	leer mf
	Escribir Sin Saltar "Año Actual : "
	leer af
	
	si (m < mf) Entonces
	edad<- af-a
		
    SiNo
	
	Si(m == mf) Entonces
	si (d < df + 1) Entonces
	edad = (af - a)
		
	SiNo
	edad = (af - a) - 1
    FinSi

	SiNo
	edad = (af - a) - 1
    FinSi

	FinSi
	Escribir ""
	Escribir "Edad : ", edad
FinAlgoritmo
