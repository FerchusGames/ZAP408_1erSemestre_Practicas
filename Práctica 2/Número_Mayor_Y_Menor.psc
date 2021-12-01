Algoritmo Número_Mayor_Y_Menor
	Escribir 'Este programa muestra cuál número fue mayor y cuál fue menor entre dos valores numéricos introducidos por el usuario'
	Escribir 'Por favor introduce el primer número'
	Leer Valor1
	Escribir 'Ahora introduce el segundo número'
	Leer Valor2
	// Lo que haremos en este siguiente proceso es verificar que los dos números no sean iguales.
	// Si lo fueran, se producirían errores, y el programa solo puede dictar el número mayor y menor, no si son iguales.
	Mientras Valor1=Valor2 Hacer
		Escribir 'Introdujiste dos números iguales, por favor introduce uno distinto'
		Leer Valor2
	FinMientras
	Si Valor1>Valor2 Entonces
		ValorMayor <- Valor1
		ValorMenor <- Valor2
	SiNo
		ValorMayor <- Valor2
		ValorMenor <- Valor1
	FinSi
	Escribir 'El número mayor fue: ',ValorMayor
	Escribir 'El número menor fue: ',ValorMenor
FinAlgoritmo
