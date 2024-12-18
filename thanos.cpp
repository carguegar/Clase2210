#include <iostream>
using namespace std;

int main () {
	int num_personas, num_casos, num_muertes, num_saltos, pos_stark, pos_peter;
	bool stark_muerto, peter_muerto, bucle_mortal;

	cin >> num_casos;
	for (int i = 0; i < num_casos; i++){
		cin >> num_personas >> pos_stark >> pos_peter >> num_saltos;
		num_muertes = num_personas / 2;
		stark_muerto = false;
		peter_muerto = false;
		for (int j = num_saltos + 1; num_personas > num_muertes; j += num_saltos){//posición que mato
			if (j > num_personas){
				j = j - num_personas;
			}if (j == pos_stark){
				stark_muerto = true;
			}
			if (j == pos_peter){
				peter_muerto = true;
			}
			if (pos_stark > j){
				pos_stark--;
			}
			if (pos_peter > j){
				pos_peter--;
			}
			num_personas--;
		}
		if (stark_muerto && peter_muerto == false){
			cout << "No quiero irme, Peter!" << endl;
			
		}else if (peter_muerto && stark_muerto == false){
			cout << "No quiero irme, Sr. Stark!" << endl;
		}else if ( (peter_muerto && stark_muerto) || (peter_muerto == false && stark_muerto == false) ){
			cout << "No hay abrazo" << endl;
		}
	}
}