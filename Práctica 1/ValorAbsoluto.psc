Algoritmo ValorAbsoluto
	// El valor absoluto de un número nos indica la distancia que tiene del cero, por lo que no hay negativos ni positivos, solo números.
	// Los números positivos ya están en su valor absoluto mientras que los negativos no.
	// En este caso, si el número que el usuario introduce es positivo, se deja igual, pero si es negativo, se multiplicará por (-1)
	Escribir 'Este programa calculará el valor absoluto del número que introduzcas'
	Escribir 'Vamos, introduce un número, el que tú quieras'
	Leer número
	Si número<0 Entonces
		número <- número*(-1)
	FinSi
	Escribir 'El valor absoluto del número que ingresaste es: ',número
FinAlgoritmo
