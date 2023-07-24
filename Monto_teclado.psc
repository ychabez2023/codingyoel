Algoritmo Monto
	Escribir "************************************************"
    Escribir "Ingrese la Cantidad a Comprar : "
	Escribir "************************************************"
    Leer Cantidad
    Segun Cantidad Hacer
        1, 2, 3: Costo = 100
        4, 5, 6, 7, 8: Costo = 85
        De Otro Modo: Costo = 90
    Fin Segun
	Escribir "*************************************************"
    Escribir "Costo por cada Teclado : ", Costo
	Escribir "*************************************************"
    Escribir "Total a Pagar : ", Costo * Cantidad
	Escribir "*************************************************"
FinAlgoritmo