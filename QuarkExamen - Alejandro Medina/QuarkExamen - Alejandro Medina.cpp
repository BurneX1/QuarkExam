// QuarkExamen - Alejandro Medina.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

#include "InterfaceViewer.cpp"
#include "MainShopModel.cpp"



int main()
{
	MyOutput *otp;
	otp = new MyOutput();
	otp->SystemMessage("This a test emessage");



	Receip* rcp;
	char name[40];
	cin.getline(name, 40);
	Clothes cl = Clothes(name);
	Clothes clt[3] = { cl,cl,cl };
	cout << "The Length of the Array is : " << end(clt) - begin(clt); //length
	rcp = new Receip(0001,0001,clt);
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
