
#ifndef TESTES_H
#define TESTES_H

#include<iostream>
#include"implementação.h"

using namespace std;





void teste() {

	int vetor[] = {0,3,2,6,1},int inicio,fim;

	insertion_sort(vetor, 5);
	


	for (int i = 0; i <= 5; i++) {
		cout << vetor[i]<<"\t";
	}

}








#endif
