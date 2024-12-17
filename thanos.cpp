#include <iostream>
using namespace std;

int main () {
	int num_personas, num_casos, num_muertes, num_saltos, pos_stark, pos_peter;

	cin >> num_casos;
	cin >> num_personas >> pos_stark >> pos_peter >> num_saltos;

	if (num_personas % 2 == 0){
		num_muertes = num_personas / 2;
	}else {
		num_muertes = num_personas / 2 +1;
	}
}