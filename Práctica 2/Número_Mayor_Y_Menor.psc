Algoritmo N�mero_Mayor_Y_Menor
	Escribir 'Este programa muestra cu�l n�mero fue mayor y cu�l fue menor entre dos valores num�ricos introducidos por el usuario'
	Escribir 'Por favor introduce el primer n�mero'
	Leer Valor1
	Escribir 'Ahora introduce el segundo n�mero'
	Leer Valor2
	// Lo que haremos en este siguiente proceso es verificar que los dos n�meros no sean iguales.
	// Si lo fueran, se producir�an errores, y el programa solo puede dictar el n�mero mayor y menor, no si son iguales.
	Mientras Valor1=Valor2 Hacer
		Escribir 'Introdujiste dos n�meros iguales, por favor introduce uno distinto'
		Leer Valor2
	FinMientras
	Si Valor1>Valor2 Entonces
		ValorMayor <- Valor1
		ValorMenor <- Valor2
	SiNo
		ValorMayor <- Valor2
		ValorMenor <- Valor1
	FinSi
	Escribir 'El n�mero mayor fue: ',ValorMayor
	Escribir 'El n�mero menor fue: ',ValorMenor
FinAlgoritmo
