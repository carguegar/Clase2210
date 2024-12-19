#include <iostream>
using namespace std;

int main () {
	int dato, i = 0, j, posicion, numero_final;
	double suma = 0.0, media, mayor_media = 0.0;
	bool simbolo;	

	do{
		do{
			numero_final = 0;
			simbolo = false;
			do{
				dato = cin.get();
				if (dato >= '0' && dato <= '9'){
					numero_final = numero_final * 10 + (dato - '0');
				}else if (dato != ' '){
					simbolo = true;
					numero_final = 1; // tengo que darle valor distinto de 0 a num_real para que no me cierre el programa con el 0 de cambio de paquete
				}
			}while (dato != ' ');
			if (numero_final != 0 && simbolo == false){
				suma += numero_final;
				i++;
			 }
		}while(numero_final != 0);
		media = suma/i;
		if (media > mayor_media){
			mayor_media = media;
			posicion = j;
		}
		j++;
		suma = 0;
		i = 0;	
		dato = cin.peek();
	}while(dato != 48);
	cout << "El paquete con mayor media es el número " << posicion << " con media = " << mayor_media << endl;
}
