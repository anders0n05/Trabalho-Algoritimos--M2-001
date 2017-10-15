
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
template<typename B>
void mostra_vetor_ordenado(B vetor[],int n) {
	

	for (int i = 0; i < n; i++) {
		cout << "|" << vetor[i] << "|";
	}
	cout << endl;


}



void teste() {

	int vetor_insertion1[] = { 0,3,2,6,1 };
	float vetor_insertion2[] = { 1.30,2.50,5.60 , 10.30,0.2 };
	char vetor_insertion3[] = { 'e','d','c','b','a' };
	int inicio,fim;

	int vetor_quick1[] = { 0,10,6,7,1 };
	float vetor_quick2[] = { 2.0,2.5,2.6, 0.5,9.6 };
	char vetor_quick3[] = { 'o','p','e','x','p' };

	cout << " estes sao os vetores a ser ordenados por insertion_sort" << endl;

	mostra_vetor_original(vetor_insertion1, 5);
	cout << endl;
	mostra_vetor_original(vetor_insertion2, 5);
	cout << endl;
	mostra_vetor_original(vetor_insertion3, 5);
	cout << endl;

	cout << "Este saos os vetores  ordenados com insertion: inteiro, real e caracteres" << endl;
    insertion_sort<int,int>(vetor_insertion1, 5);
	cout << endl;
	mostra_vetor_ordenado<int>(vetor_insertion1, 5);
	cout << endl;
	insertion_sort<float,int>(vetor_insertion2, 5);
    mostra_vetor_ordenado<float>(vetor_insertion2, 5);
	cout << endl;
	insertion_sort<char,int>(vetor_insertion3, 5);
	mostra_vetor_ordenado<char>(vetor_insertion3, 5);
	cout << endl;
	
	cout << " estes sao os vetores a ser ordenados por quick_sort" << endl;

	mostra_vetor_original<int>(vetor_quick1, 5);
	cout << endl;
	mostra_vetor_original<float>(vetor_quick2, 5);
	cout << endl;
	mostra_vetor_original<char>(vetor_quick3, 5);
	cout << endl;


	cout << "Este saos os vetores  ordenados com quick sort: inteiro, real e caracteres" << endl;
	quick_sort<int>(vetor_quick1, 0, 4);
	cout << endl;
	mostra_vetor_ordenado(vetor_quick1, 5);
	cout << endl;
//	quick_sort<float>(vetor_quick2, 0, 4);
	mostra_vetor_ordenado(vetor_quick2, 5);
	cout << endl;
	quick_sort<char>(vetor_quick3,0,4);
	mostra_vetor_ordenado(vetor_quick3, 5);
	cout << endl;






	system("pause");
}








#endif
