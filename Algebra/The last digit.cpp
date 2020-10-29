#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	int i=0, casos=0, base=0, exponente=0, resultado=0, modulo=0; // declaracion de variables a usar
	cin>>casos; // el usuario introduce el numero de consultas
	cout<<endl;
	if(casos<=30) // si el numero de consultas es igual o menor a 30
	{
	
		for(i=0; i<casos; i++) //ciclo for que se repetira el numero de consultas introducidas por el usuario
		{
			cin>>base>>exponente; // introduce la base y el exponente del numero a calcular
			resultado=pow(base, exponente); // elevamos la base al exponente
			modulo=resultado%10; // en este paso hacemos la division entera del resultado entre 10 para guardar el residuo de esta operacion el cual sera el ultimo digito de la base elevada al expoenente
			cout<<modulo; //imprimimos lo anterior
			cout<<endl;
		}
	}
	
	return 0;
}
