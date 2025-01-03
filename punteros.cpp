#include "iostream"

using namespace std;

int main()
{
	//TIPO DE DATOS

	// Bool tamaño [8bits] rango [0 (falso) y 1 (verdadero)]
	// Int tamaño [32bits]  rango [-2.147.483.648 y 2.147.483.647]
	/*combinaciones con los modificadores :

		short int  [16bits] rango [-32.768 y 32.767]
		unsigned short int [16bits] rango [0 y 65535]
		unsigned int [32bits] rango [0 y 4.294.967.295.]
		long long int [64bits] rango [-9.223.372.775.808 y 9.223.375.775.807]
		unsigned long long int [64bits] rango [0 y 2exp64]
	*/
	// float tamaño [32bits] decimales, usados para números con 6 o menos cifras decimales
	// double tamaño [64bits] decimales, usado para números menos de 15 cifras decimales
	// long double [96 bits] y con 18 cifras decimales.
	// char & string cadena de texto.

	//PUNTEROS

	int* var = new int; //creamos un entero
	*var = 100;
	cout << var; //imprimer la dirección de memoria
	cout << "\n" << *var << "\n"; //imprimimos el valor

	char *var2 = new char;
	*var2 = 'K';
	cout << var2 << "\n";
	cout << *var2;


	//Liberar memoria
	delete var; //con esto liberamos la memoria
	delete var2;
	var = NULL;
	var2 = NULL;


	return 0;

}
