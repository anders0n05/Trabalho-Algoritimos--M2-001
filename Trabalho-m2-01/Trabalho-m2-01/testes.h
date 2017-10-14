
#ifndef TESTES_H
#define TESTES_H

#include<iostream>
#include"implementação.h"

using namespace std;
template<typename B>

void mostra_vetor_original(B vetor[], int n) {

	for (int i = 0; i < n; i++) {
		cout << "|" << vetor[i] << "|";
	}
	cout << endl;

}
template<typename A>
void mostra_vetor_ordenado(A vetor[],int n) {
	

	for (int i = 0; i < n; i++) {
		cout << "|" << vetor[i] << "|";
	}
	cout << endl;


}



void teste() {

	int vetor_insertion1[] = { 0,3,2,6,1 };
	float vetor_insertion2[] = { 1.3,2.5,5.6 , 10.3,9.6 };
	char vetor_insertion3[] = { 'z','b','u','w','p' };
	int inicio,fim;

	int vetor_quick1[] = { 0,10,6,7,1 };
	float vetor_quick2[] = { 10.2,2.5,15.9 , 0.5,9.6 };
	char vetor_quick3[] = { 'o','p','e','x','p' };

	cout << " estes sao os vetores a ser ordenados por insertion_sort" << endl;

	mostra_vetor_original(vetor_insertion1, 5);
	cout << endl;
	//mostra_vetor_original(vetor_insertion2, 5);
	cout << endl;
	//mostra_vetor_original/(vetor_insertion3, 5);
	cout << endl;


	cout << "Este saos os vetores  ordenados com insertion: inteiro, real e caracteres" << endl;
	insertion_sort(vetor_insertion1, 5);
	cout << endl;
	mostra_vetor_ordenado(vetor_insertion1, 5);
	cout << endl;
	//insertion_sort(vetor_insertion2, 5);
	//mostra_vetor_ordenado(vetor_insertion2, 5);
	cout << endl;
	//insertion_sort(vetor_insertion3, 5);
	//mostra_vetor_ordenado(vetor_insertion3, 5);
	//cout << endl;

	
	cout << " estes sao os vetores a ser ordenados por quick_sort" << endl;

	mostra_vetor_original(vetor_quick1, 5);
	cout << endl;
	//mostra_vetor_original(vetor_quick2, 5);
	cout << endl;
	//mostra_vetor_original/(vetor_quick3, 5);
	cout << endl;


	cout << "Este saos os vetores  ordenados com quick sort: inteiro, real e caracteres" << endl;
    quick_sort(vetor_quick1,0, 4);
	cout << endl;
	mostra_vetor_ordenado(vetor_quick1, 5);
	cout << endl;
	quick_sort(vetor_quick2, 0,4);
	mostra_vetor_ordenado(vetor_quick2, 5);
	cout << endl;
	//quick_sort(vetor_quick3, 4);
	//mostra_vetor_ordenado(vetor_quick3, 5);
	//cout << endl;

	system("pause");
}








#endif
