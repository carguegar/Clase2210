#include <iostream>
using namespace std;

int main () {
	int num_personas, num_casos, num_muertes, num_saltos, pos_stark, pos_peter;
	bool stark_muerto = false, peter_muerto = false;

	cin >> num_casos;
	cin >> num_personas >> pos_stark >> pos_peter >> num_saltos;

	if (num_personas % 2 == 0){
		num_muertes = num_personas / 2;
	}else {
		num_muertes = num_personas / 2 +1;
	}
	for (int i = 0; i < num_muertes; i++){
		for (int j = num_saltos + 1; ; j += num_saltos + 1){//posición que mato
			if (j > num_personas){
				j = j - num_personas;
			}else (if j == pos_stark){
				stark_muerto = true;
			}if (j == pos_peter){
				peter_muerto = true;
			}

		}
	}
	if (stark_muerto && peter_muerto == false){
		cout << "No quiero irme, Peter!" << endl;
			
	}else if (peter_muerto && stark_muerto == false){
		cout << "No quiero irme, Sr. Stark!"
	}else if ( (peter_muerto && stark_muerto) || (peter_muerto == false && stark_muerto == false) ){
		cout << "No hay abrazo" << endl;
	}
}