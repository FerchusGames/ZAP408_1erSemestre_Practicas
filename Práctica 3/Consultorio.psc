Algoritmo Consultorio
	Definir edad,peso,estatura,severidad,veces,horas Como Entero
	Definir binDiabetes,binHipertensi�n,binComerBien,binAlergias,binEnfermedadFamiliar,binEnfermedadPropia,binPasadoAntes,binTomadoMedicamento,binDormirBien Como Logico
	Definir nombre,sexo,profesi�n,s�ntomas,alergias,enfermedadesFamiliares,enfermedadesPropias,tipoSangre,fechaInicio,fechaPasada,medicamentoTomado,reacci�nMedicamento Como Caracter
	Escribir 'Buen d�a. Por favor introduce tu nombre completo'
	Leer nombre
	Escribir '�Cu�l es tu sexo?'
	Leer sexo
	Escribir '�Cu�ntos a�os tienes?'
	Leer edad
	Escribir '�Cu�nto pesas?'
	Leer peso
	Escribir '�Cu�l es tu estatura?'
	Leer estatura
	Escribir '�Cu�l es tu tipo de sangre?'
	Leer tipoSangre
	Escribir '�Tienes Diabetes? 0 = No, 1 = S�'
	Leer binDiabetes
	Escribir '�Tienes Hipertensi�n? 0 = No, 1 = S�'
	Leer binHipertensi�n
	Escribir '�Tienes alergias? 0 = No, 1 = S�'
	Leer binAlergias
	Si binAlergias Entonces
		Escribir 'Escribe tus alergias separadas por comas'
		Leer alergias
	FinSi
	Escribir '�A qu� te dedicas?'
	Leer profesi�n
	Escribir '�Alg�n familiar padece o padeci� de alguna enfermedad? 0 = No, 1 = S�'
	Leer binEnfermedadFamiliar
	Si binEnfermedadFamiliar Entonces
		Escribir 'Escribe las enfermedades y el pariente que la padece o padeci�, separadas por comas'
		Leer enfermedadesFamiliares
	FinSi
	Escribir '�Padeces de alguna enfermedad? 0 = No, 1 = S�'
	Leer binEnfermedadPropia
	Si binEnfermedadPropia Entonces
		Escribir 'Escribe las enfermedades que padeces, separadas por comas'
		Leer enfermedadesPropias
	FinSi
	Escribir '�Consideras que tu alimentaci�n es adecuada? 0 = No, 1 = S�'
	Leer binComerBien
	Escribir '�Consideras que duermes bien? 0 = No, 1 = S�'
	Leer binDormirBien
	Escribir '�Cu�ntas horas duermes cada noche?'
	Leer horas
	Escribir 'Cu�ntame, �Por qu� viniste aqu�? �Cu�les son tus s�ntomas?'
	Leer s�ntomas
	Escribir 'Del uno al diez, �Qu� tan severos los sientes?'
	Leer severidad
	Escribir '�Qu� d�a empezaron los s�ntomas?'
	Leer fechaInicio
	Escribir '�Haz estado tomando medicamento?'
	Leer binTomadoMedicamento
	Si binTomadoMedicamento Entonces
		Escribir 'Escribe los medicamentos que has estado tomando'
		Leer medicamentoTomado
		Escribir '�C�mo has reaccionado al medicamento?'
		Leer reacci�nMedicamento
	FinSi
	Escribir '�Ya hab�as presentado s�ntomas anteriormente? 0 = No, 1 = S�'
	Leer binPasadoAntes
	Si binPasadoAntes Entonces
		Escribir '�Cu�ntas veces?'
		Leer veces
		Escribir 'Escribe las fechas en las que los hab�as presentado anteriormente, separadas por comas'
		Leer fechaPasada
	FinSi
FinAlgoritmo
