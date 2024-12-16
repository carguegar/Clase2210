#include <iostream>
#include <iomanip>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"
using namespace std;

int main () {
	int numero_casos = 1, equipos = 1, repesca, numero, numero_real, plazas, plazas_totales, j = 0, i=0;
	bool error_equipos = false, error_simbolo = false, error_federacion1 = false, error_federacion2 = false, error_federacion3 = false, error_federacion4 = false, error_federacion5 = false, error_federacion6 = false;

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
				}else if (numero != ' ' && numero != '\n'){
					numero_real = -725774;
				}
			} while (numero != ' ' && numero != '\n');
			if (numero_real == -725774){
				error_simbolo = true;
			}
			if (numero_real == -725774 && j == 0){
				error_equipos = true;
			}else if (j == 0){
				equipos = numero_real;
			}else if(j == 1 && numero_real == -725774){
				error_federacion1 = true;
			}else if(j == 2 && numero_real == -725774){
				error_federacion2 = true;
			}else if(j == 3 && numero_real == -725774){
				error_federacion3 = true;
			}else if(j == 4 && numero_real == -725774){
				error_federacion4 = true;
			}else if(j == 5 && numero_real == -725774){
				error_federacion5 = true;
			}else if(j == 6 && numero_real == -725774){
				error_federacion6 = true;
			}else{
				plazas = numero_real;
				plazas_totales += plazas;
			}
			j++;
		}while ( numero != '\n');
		repesca = equipos - plazas_totales;
		if (error_simbolo){
			cout << RED << "ERROR: Simbolos erroneos detectados en: ";
			if (error_equipos){
				cout << "el número de equipos ";
			}
			if (error_federacion1){
				cout << "la federación UEFA ";
			}
			if (error_federacion2){
				cout << "la federación AFC ";
			}
			if (error_federacion3){
				cout << "la federación CAF ";
			}
			if (error_federacion4){
				cout << "la federación CONCACAF ";
			}
			if (error_federacion5){
				cout << "la federación CONMEBOL ";
			}
			if (error_federacion6){
				cout << "la federación OFC ";
			}
			cout << RESET << endl;
		}else if (equipos > 128){
			cout << RED << "ERROR: Demasiados equipos" << RESET << endl;
		}else if (equipos < 1){
			cout << RED << "ERROR: No hay suficientes equipos" << RESET << endl;
		}else if (j > 7 ){
			cout << RED << "ERROR: Demasiadas federaciones" << RESET << endl;

		}else if (j < 7 ){
			cout << RED << "ERROR: No hay suficientes federaciones" << RESET << endl;
		}else if (plazas_totales > equipos){
			cout << RED << "ERROR: Plazas superadas" << RESET << endl;
		}else {
		cout << GREEN << repesca << RESET << endl;
		}
		i++;
	}while(i < numero_casos);
		
}
