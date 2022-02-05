//Incluimos la libreria estándar de c++
#include<iostream>

//Incluimos la libreria para manejo de cadena de caracteres en C++
#include<string>

//y el namespace principal
using namespace std;

void hola_mundo() {
	
	cout << "Hola mundo!";
}

int main() {
	
	//declaración de variables enteras
	int a, b;
	
	//Declaracion de string
	string s;
	
	//cin se utiliza para tomar valores de entradas del usuario
	//utilizamos cin así:
	// cin << varialbe_1 << variable_2 << variable_3;
	//Lo pueden imaginar como que todo lo que esta a su derecha
	//va a alojar los valores que les pasemos
	// el flujo pasa en la dirección para allá ----->
	// El primer valor leido se alojara en "a"
	// El segundo valor leido se alojara en "b"
	cin >> a >> b;
	
	//Instruction if en C o C++
	if(a > b) {
		// Imprimimos con cout
		// La manera de imprimir en C++ es usando cout
		//Lo pueden imaginar como que todo lo que esta a su derecha
		//va a ser impreso
		// el flujo pasa en la dirección pa' allá <------
		cout << a << " es mayor que " << b << endl;
	}
	
	//Iteracion tipo for en C++
	for(int i = 0 ; i < 10; i++) {
		cout << i + 1 << endl;
	}
	
	//llamada a una función en C++
	hola_mundo();
	
	//Las funciones en C++ deben retornar algun valor (o ninguno)
	//por ahora asumiremos que retornan algo
	//Retornamos 0 que le indica al programa que todo ha estado bien :)
	return 0;
}