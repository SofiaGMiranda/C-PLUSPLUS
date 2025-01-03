#include "iostream"
#include "math.h"


using namespace std;


int menu(int *op)
{
		cout << "Hola, este es un menu basico para empezar de calculadora BASICO\n";
		cout << "1] suma\n";
		cout << "2] resta\n";
		cout << "3] multiplicacion\n";
		cout << "4] division\n";
		cout << "5] operaciones mixtas\n";
		cout << "6] RAIZ \n";
		cout << "7] Potenciacion\n";
		cout << "8] mostrar todo\n";
		cout << "9] Exit\n";

		cout << "INSERTE OPCION: \n";
		cin >> *op;
	return *op;

}

float potenciacion_alCUBO(float x)
{
	float* a = new float;
	*a= pow(x, 3);
	cout << "El resultadado de " << x << " al cubo es -> " << *a << "\n";
	return *a;

}
float potenciacion_alCUADRADO(float x)
{
	float* a = new float;
	*a = pow(x, 2);
	cout << "El resultadado de " << x << " al cuadrado es -> " << *a << "\n";
	return *a;
	
}
float potenciacion_aLAN(float x, float y)
{

	float* a = new float;
	*a = pow(x, y);
	cout << "El resultadado de " << x << " a la N es -> " << *a << "\n";
	return *a;
}

float raiz_cuadrada(float x)
{
	float* aa = new float;
	*aa=sqrt(x);
	cout << "La raiz cuadrada de [" << x << "] es " << *aa<<"\n";
	return *aa;
}
float raiz_alCUBO(float x)
{
	float* aa = new float;
	*aa = cbrt(x);
	cout << "La raiz al cubo de [" << x << "] es " << *aa<<"\n";
	return *aa;
}

int suma(int a, int b)
{
	int *result = new int;
	*result = a + b;
	cout << "Suma: " <<*result<< "\n";
	return *result;
}
int resta(int a, int b)
{
	int* result = new int;
	*result = a - b;
	cout << "Resta: " <<*result<< "\n";
	return *result;
}

int division(int a, int b)
{
	int* result = new int;
	*result = a / b;
	cout << "Division: " << *result << "\n";
	return *result;
}

int multiplicacion(int a, int b)
{
	int* result = new int;
	*result = a * b;
	cout << "Multiplicacion: " << *result << "\n";
	return *result;
}




int main()
{
	int *a = new int;
	float *aa = new float;
	float *bb = new float;
	int *b = new int;
	int *op = new int;
	menu(op);

	
		switch (*op)
		{
		case 1:
			cout << "Inserte A->";
			cin >> *a;
			cout << "Inserte B->";
			cin >> *b;

			suma(*a, *b);
			menu(op);
			break;
		case 2:
			cout << "Inserte A->";
			cin >> *a;
			cout << "Inserte B->";
			cin >> *b;

			resta(*a, *b);

			break;
		case 3:
			cout << "Inserte A->";
			cin >> *a;
			cout << "Inserte B->";
			cin >> *b;

			multiplicacion(*a, *b);

			break;
		case 4:
			cout << "Inserte A->";
			cin >> *a;
			cout << "Inserte B->";
			cin >> *b;

			division(*a, *b);
			break;
		case 5:
			break;
		case 6:
			cout << "RAIZ - 2 & 3\n";
			cout << "Inserte A ->";
			cin >> *aa;
			raiz_cuadrada(*aa);
			raiz_alCUBO(*aa);
			break;
		case 7:
			cout << "POTENCIACION : \n";
			cout << "Inserte A -> ";
			cin >> *aa;
			cout << "Inserte N -> ";
			cin >> *bb;
			potenciacion_alCUBO(*aa);
			potenciacion_alCUADRADO(*aa);
			potenciacion_aLAN(*aa, *bb);

			break;
		case 8:
			cout << "Inserte A->";
			cin >> *a;
			cout << "Inserte B->";
			cin >> *b;

			suma(*a, *b);
			resta(*a, *b);
			multiplicacion(*a, *b);
			division(*a, *b);
			break;

		default:
			break;
		}
	
	return 0;
}
