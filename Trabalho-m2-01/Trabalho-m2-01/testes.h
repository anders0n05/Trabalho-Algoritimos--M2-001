
#ifndef TESTES_H
#define TESTES_H

#include<iostream>
#include"implementação.h"

using namespace std;





int main() {

	int vetor[2] = {2,0},int inicio,fim;

	quick_sort(vetor, 0, 2);
	


	for (int i = 0; i <= 6; i++) {
		cout << vetor[i]<<"\t";
	}

}








#endif
