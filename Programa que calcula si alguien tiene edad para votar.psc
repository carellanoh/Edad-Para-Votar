Algoritmo votaciones
	Definir edad, mayoria Como Entero
	mayoria <- 18
	Escribir 'Programa que calcula si alguien tiene edad para votar o no '
	Escribir 'Proporcioname tu edad: '
	Leer edad
	Si edad >= mayoria 
		Escribir 'Felicidades ya puedes votar'
	SiNo
		Escribir 'Aun no puedes votar, te faltan ', (mayoria - edad), ' años para poder hacerlo'
	FinSi
FinAlgoritmo