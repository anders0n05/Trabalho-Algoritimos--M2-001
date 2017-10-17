
#ifndef TESTES_H
#define TESTES_H

#include<iostream>
#include"ordenacao.h"
#include<time.h>
#include<stdlib.h>
using namespace std;



template<typename B>
void mostra_vetor(B vetor[],int n) {
	
      
	for (int i = 0; i < n; i++) {
		std::cout.precision(5);
		cout << "|" << vetor[i] << "|";
	}
	cout << endl;


}



void teste() {



	
	
	int vetor_int[5000] = {0};
	float vetor_float[10] = {0.0};
	char vetor_char[100] = {" "};
	int inicio=0,fim=4,n=5;


	cout << " estes sao os vetores a ser ordenados " << endl;
	srand (time(NULL));
	
	for (int i = 0; i < 5000; i++) {
		int elemento_int = rand() % 100;
		vetor_int[i]=elemento_int;
		cout<<"|"<<vetor_int[i]<<"|";
	}
	cout << endl << endl;
		 
	for (int i = 0; i < 10; i++) {
		float numero_decimal = rand() % 601;
		numero_decimal /= 100;
		vetor_float[i] = numero_decimal;
		
		cout<<"|"<<vetor_float[i]<<"|";
	}
	int elemento_char=rand()%26;
	cout << endl << endl;
		for (int i = 0; i < 100; i++) {
		
		vetor_char[i] = 97 + rand() % 26;
		cout<<"|"<<vetor_char[i]<<"|";
	}
		cout << endl << endl;
		system("pause");
		
		cout << endl << endl;
	cout << "Este saos os vetores  ordenados com insertion: inteiro, real e caracteres" << endl;
	insertion_sort<int,int>(vetor_int, 5000);
	cout << endl;
	mostra_vetor<int>(vetor_int, 5000);
	cout << endl;
	insertion_sort<float,int>(vetor_float,10);
	mostra_vetor<float>(vetor_float,10);
	cout << endl;
	insertion_sort<char,int>(vetor_char,100);
	mostra_vetor<char>(vetor_char,100);
	cout << endl << endl;




	cout << "Este saos os vetores  ordenados com quick sort: inteiro, real e caracteres" << endl;
	quick_sort(vetor_int, 0, 4999);
	mostra_vetor<int>(vetor_int, 5000);
	cout << endl;
	quick_sort(vetor_float,0,9);
	mostra_vetor<float>(vetor_float, 10);
	cout << endl;
	quick_sort(vetor_char, 0, 99);
	mostra_vetor<char>(vetor_char, 100);
	system("pause");
	
}








#endif
