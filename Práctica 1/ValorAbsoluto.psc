Algoritmo ValorAbsoluto
	// El valor absoluto de un n�mero nos indica la distancia que tiene del cero, por lo que no hay negativos ni positivos, solo n�meros.
	// Los n�meros positivos ya est�n en su valor absoluto mientras que los negativos no.
	// En este caso, si el n�mero que el usuario introduce es positivo, se deja igual, pero si es negativo, se multiplicar� por (-1)
	Escribir 'Este programa calcular� el valor absoluto del n�mero que introduzcas'
	Escribir 'Vamos, introduce un n�mero, el que t� quieras'
	Leer n�mero
	Si n�mero<0 Entonces
		n�mero <- n�mero*(-1)
	FinSi
	Escribir 'El valor absoluto del n�mero que ingresaste es: ',n�mero
FinAlgoritmo
