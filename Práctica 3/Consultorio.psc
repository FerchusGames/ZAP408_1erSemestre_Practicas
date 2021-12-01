Algoritmo Consultorio
	Definir edad,peso,estatura,severidad,veces,horas Como Entero
	Definir binDiabetes,binHipertensión,binComerBien,binAlergias,binEnfermedadFamiliar,binEnfermedadPropia,binPasadoAntes,binTomadoMedicamento,binDormirBien Como Logico
	Definir nombre,sexo,profesión,síntomas,alergias,enfermedadesFamiliares,enfermedadesPropias,tipoSangre,fechaInicio,fechaPasada,medicamentoTomado,reacciónMedicamento Como Caracter
	Escribir 'Buen día. Por favor introduce tu nombre completo'
	Leer nombre
	Escribir '¿Cuál es tu sexo?'
	Leer sexo
	Escribir '¿Cuántos años tienes?'
	Leer edad
	Escribir '¿Cuánto pesas?'
	Leer peso
	Escribir '¿Cuál es tu estatura?'
	Leer estatura
	Escribir '¿Cuál es tu tipo de sangre?'
	Leer tipoSangre
	Escribir '¿Tienes Diabetes? 0 = No, 1 = Sí'
	Leer binDiabetes
	Escribir '¿Tienes Hipertensión? 0 = No, 1 = Sí'
	Leer binHipertensión
	Escribir '¿Tienes alergias? 0 = No, 1 = Sí'
	Leer binAlergias
	Si binAlergias Entonces
		Escribir 'Escribe tus alergias separadas por comas'
		Leer alergias
	FinSi
	Escribir '¿A qué te dedicas?'
	Leer profesión
	Escribir '¿Algún familiar padece o padeció de alguna enfermedad? 0 = No, 1 = Sí'
	Leer binEnfermedadFamiliar
	Si binEnfermedadFamiliar Entonces
		Escribir 'Escribe las enfermedades y el pariente que la padece o padeció, separadas por comas'
		Leer enfermedadesFamiliares
	FinSi
	Escribir '¿Padeces de alguna enfermedad? 0 = No, 1 = Sí'
	Leer binEnfermedadPropia
	Si binEnfermedadPropia Entonces
		Escribir 'Escribe las enfermedades que padeces, separadas por comas'
		Leer enfermedadesPropias
	FinSi
	Escribir '¿Consideras que tu alimentación es adecuada? 0 = No, 1 = Sí'
	Leer binComerBien
	Escribir '¿Consideras que duermes bien? 0 = No, 1 = Sí'
	Leer binDormirBien
	Escribir '¿Cuántas horas duermes cada noche?'
	Leer horas
	Escribir 'Cuéntame, ¿Por qué viniste aquí? ¿Cuáles son tus síntomas?'
	Leer síntomas
	Escribir 'Del uno al diez, ¿Qué tan severos los sientes?'
	Leer severidad
	Escribir '¿Qué día empezaron los síntomas?'
	Leer fechaInicio
	Escribir '¿Haz estado tomando medicamento?'
	Leer binTomadoMedicamento
	Si binTomadoMedicamento Entonces
		Escribir 'Escribe los medicamentos que has estado tomando'
		Leer medicamentoTomado
		Escribir '¿Cómo has reaccionado al medicamento?'
		Leer reacciónMedicamento
	FinSi
	Escribir '¿Ya habías presentado síntomas anteriormente? 0 = No, 1 = Sí'
	Leer binPasadoAntes
	Si binPasadoAntes Entonces
		Escribir '¿Cuántas veces?'
		Leer veces
		Escribir 'Escribe las fechas en las que los habías presentado anteriormente, separadas por comas'
		Leer fechaPasada
	FinSi
FinAlgoritmo
