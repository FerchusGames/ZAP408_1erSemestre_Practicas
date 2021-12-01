// ZAP408_Práctica10
// Luis Fernando González Chávez

#include <string>
#include <iostream>
#include <time.h>
#include <locale>
#include <Windows.h>

struct Alumno
{
	std::string nombre;
	int swag = 0;
	int drip = 0;
	int flow = 0;
	int facha = 0;
private:
};


int main()
{
	setlocale(LC_ALL, "spanish");
	srand(time_t(0));

	const int númeroAlumnos = 18;

	Alumno Alumno[númeroAlumnos];

	Alumno[0].nombre = "Aguilar Ortega Karen Michelle";
	Alumno[1].nombre = "Angeles Hernández Omar Alejandro";
	Alumno[2].nombre = "Alfredo Ángel Becerra Jacinto";
	Alumno[3].nombre = "Camarillo Chavez Dylan";
	Alumno[4].nombre = "Duarte Hurtado Ricardo";
	Alumno[5].nombre = "Flores Gomez Oscar Josue";
	Alumno[6].nombre = "Flores Sandoval Carlos Yussel David";
	Alumno[7].nombre = "González Chávez Luis Fernando";
	Alumno[8].nombre = "López Yañez Hernández Kuvassi";
	Alumno[9].nombre = "Medina Enciso Jair Guadalupe";
	Alumno[10].nombre = "Moram Pérez Israel";
	Alumno[11].nombre = "Pérez Maginniss Ricardo Patricio";
	Alumno[12].nombre = "Ríos Ramírez Oscar Alejandro";
	Alumno[13].nombre = "Rios Ramirez Juan Pablo";
	Alumno[14].nombre = "Rosas Vazquez Eric Isaac";
	Alumno[15].nombre = "Tapia Robles Rodrigo";
	Alumno[16].nombre = "Torres Zamora Jesús Abraham";
	Alumno[17].nombre = "Velazquez Cabrera Kevin de Jesus";

	// Empieza la interacción con el usuario
	std::cout << "En este programa, haremos una simulación de battle royale entre los alumnos de la clase de programación" << std::endl << std::endl;
	Sleep(3000);
	std::cout << "Los alumnos que participarán son: " << std::endl << std::endl;
	Sleep(2500);

	for (int i = 0; i < númeroAlumnos; i++) // Muestra todos los nombres
	{
		Sleep(500);
		std::cout << Alumno[i].nombre << std::endl;
	}
	
	std::cout << std::endl;
	Sleep(2500);

	for (int i = 0; i < númeroAlumnos; i++) // Establece los valores de propiedades de todos los alumnos
	{
		Alumno[i].swag = rand() % 100;
		Alumno[i].drip = rand() % 100;
		Alumno[i].flow = rand() % 100;
		Alumno[i].facha = rand() % 100;
	}

	// Se asigna un alumno por propiedad para que se les de un power-up
	int alumnoPowSwag = rand() % númeroAlumnos;
	int alumnoPowDrip = rand() % númeroAlumnos;
	int alumnoPowFlow = rand() % númeroAlumnos;
	int alumnoPowFacha = rand() % númeroAlumnos;

	// Se muestran los alumnos a los que se les dará power-ups
	std::cout << "Oh vaya, parece que un amable desconocido le ha dado power-ups a los siguientes alumnos:" << std::endl << std::endl;
	Sleep(2000);
	std::cout << "Power-Up de S W A G: " << Alumno[alumnoPowSwag].nombre << std::endl;
	Sleep(1000);
	std::cout << "Power-Up de D R I P: " << Alumno[alumnoPowDrip].nombre << std::endl;
	Sleep(1000);
	std::cout << "Power-Up de F L O W: " << Alumno[alumnoPowFlow].nombre << std::endl;
	Sleep(1000);
	std::cout << "Power-Up de F A C H A: " << Alumno[alumnoPowFacha].nombre << std::endl << std::endl;
	Sleep(2500);

	// Se le agregan los valores a los alumnos con los power ups
	Alumno[alumnoPowSwag].swag = Alumno[alumnoPowSwag].swag + rand() % 100;
	Alumno[alumnoPowDrip].drip = Alumno[alumnoPowDrip].drip + rand() % 100;
	Alumno[alumnoPowFlow].flow = Alumno[alumnoPowFlow].flow + rand() % 100;
	Alumno[alumnoPowFacha].facha = Alumno[alumnoPowFacha].facha + rand() % 100;

	int mayorSwag = 0;
	int menorSwag = 0;
	int mayorDrip = 0;
	int menorDrip = 0;
	int mayorFlow = 0;
	int menorFlow = 0;
	int mayorFacha = 0;
	int menorFacha = 0;

	std::cout << "Comparando resultados";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	std::cout << "." << std::endl;
	Sleep(3000);
	
	for (int i = 1; i < númeroAlumnos; i++) // Se hacen comparaciones para determinar los mayores y menores por cada propiedad
	{
		if (Alumno[i].swag > Alumno[mayorSwag].swag) mayorSwag = i;

		if (Alumno[i].swag < Alumno[menorSwag].swag) menorSwag = i;

		if (Alumno[i].drip > Alumno[mayorDrip].drip) mayorDrip = i;

		if (Alumno[i].drip < Alumno[menorDrip].drip) menorDrip = i;

		if (Alumno[i].flow > Alumno[mayorFlow].flow) mayorFlow = i;

		if (Alumno[i].flow < Alumno[menorFlow].flow) menorFlow = i;

		if (Alumno[i].facha > Alumno[mayorFacha].facha) mayorFacha = i;

		if (Alumno[i].facha < Alumno[menorFacha].facha) menorFacha = i;
	}

	std::cout << "Estos fueron los resultados:" << std::endl << std::endl;
	Sleep(2000);

	// Se muestran los mayores y menores en cada categoría
	std::cout << "El alumno con mayor S W A G fue: " << Alumno[mayorSwag].nombre << std::endl; 
	Sleep(2000);
	std::cout << "El alumno con menor S W A G fue: " << Alumno[menorSwag].nombre << std::endl;
	Sleep(2000);
	std::cout << "El alumno con mayor D R I P fue: " << Alumno[mayorDrip].nombre << std::endl;
	Sleep(2000);
	std::cout << "El alumno con menor D R I P fue: " << Alumno[menorDrip].nombre << std::endl;
	Sleep(2000);
	std::cout << "El alumno con mayor F L O W fue: " << Alumno[mayorFlow].nombre << std::endl;
	Sleep(2000);
	std::cout << "El alumno con menor F L O W fue: " << Alumno[menorFlow].nombre << std::endl;
	Sleep(2000);
	std::cout << "El alumno con mayor F A C H A fue: " << Alumno[mayorFacha].nombre << std::endl;
	Sleep(2000);
	std::cout << "El alumno con menor F A C H A fue: " << Alumno[menorFacha].nombre << std::endl;
	Sleep(5000);

	std::cout << std::endl << "Estos fueron los valores para que corrobores los resultados: " << std::endl << std::endl;
	Sleep(5000);

	for (int i = 0; i < númeroAlumnos; i++)
	{
		std::cout << Alumno[i].nombre << ":" << std::endl;
		std::cout << "S W A G: " << Alumno[i].swag << std::endl;
		std::cout << "D R I P: " << Alumno[i].drip << std::endl;
		std::cout << "F L O W: " << Alumno[i].flow << std::endl;
		std::cout << "F A C H A: " << Alumno[i].facha << std::endl << std::endl;
		Sleep(500);
	}

	std::cout << "¡GRACIAS POR PARTICPAR!";
}