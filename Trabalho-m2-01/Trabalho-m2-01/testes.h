
#ifndef TESTES_H
#define TESTES_H

#include<iostream>
#include"implementação.h"

using namespace std;

void mostra_vetor(int vetor[],int n) {
	

	for (int i = 0; i <= n; i++) {
		cout << "|" << vetor[i] << "|";
	}
	cout << endl;


}



void teste() {

	int vetor_insertion1[] = { 0,3,2,6,1 };
	float vetor_insertion2[] = { 1.3,2.5,5.6 , 10.3,9.6 };
	char vetor_insertion3[] = { 'z','b','u','w','p' };
	int inicio,fim;



	cout << "Este saos os vetores  ordenados com insertion: inteiro, real e caracteres" << endl;
	insertion_sort(vetor_insertion1, 5);
	cout << endl;
	mostra_vetor(vetor_insertion1, 5);
	cout << endl;
	//insertion_sort(vetor_insertion2, 5);
	//mostra_vetor(vetor_insertion2, 5);
	cout << endl;
	//insertion_sort(vetor_insertion3, 5);
	//mostra_vetor(vetor_insertion3, 5);
	cout << endl;

	

}








#endif
