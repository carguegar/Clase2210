#include <iostream>
#include <iomanip>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"
using namespace std;

int main () {
	int numero_casos = 1, equipos = 1, repesca, numero, numero_real, plazas, plazas_totales, j = 0, i=0;
	char federaciones_sobrantes;

	do {//bucle de datos
		numero = cin.get();
		if (numero >= '0' && numero <= '9'){
			numero_real = numero_real * 10 + (numero - '0');
		}
	} while (numero != ' ' && numero != '\n');
		numero_casos = numero_real;
	do{
		plazas_totales = 0;
		j = 0;
		do{
			numero_real = 0;
			do {//bucle de datos
				numero = cin.get();
				if (numero >= '0' && numero <= '9'){
					numero_real = numero_real * 10 + (numero - '0');
				}else {
					numero_real = -7346910;
				}
			} while (numero != ' ' && numero != '\n');
			if (j == 0){
				equipos = numero_real;
			}else {
				plazas = numero_real;
				plazas_totales += plazas;
			}
			cout << "equipos " << equipos << " plazas " << plazas << endl;
			j++;
		}while ( numero != '\n');
		repesca = equipos - plazas_totales;
		if (equipos == -7346910){
			cout << RED << "ERROR: Simbolos erroneos detectados en el número de equipos" << RESET << endl;
		}
		else if ((equipos < 1) || (equipos > 128)){
			cout << RED << "ERROR: El número de equipos debe ser entre 1 y 128" << RESET << endl;
		}
		if (plazas_totales > equipos){
			cout << RED << "ERROR: El número de plazas totales no puede ser mayor al número de equipos" << RESET << endl;
		}
		if (j != 7 ){
			cout << RED << "ERROR: Número incorrrecto de federaciones" << RESET << endl;

		}
		if (j == 7 && plazas_totales < equipos && equipos > 1 && equipos < 128){
		cout << GREEN << repesca << RESET << endl;
		}
		i++;
	}while(i < numero_casos);
		
}
