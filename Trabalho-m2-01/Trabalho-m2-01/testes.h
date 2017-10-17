
#ifndef TESTES_H
#define TESTES_H

#include<iostream>
#include"implementação.h"
#include<time.h>
#include<stdlib.h>
using namespace std;



template<typename B>
void mostra_vetor(B vetor[],int n) {
	
      
	for (int i = 0; i < n; i++) {
		cout << "|" << vetor[i] << "|";
	}
	cout << endl;


}



void teste() {

	int vetor_int[50000] = {0};
	float vetor_float[10] = {0};
	char vetor_char[100] = {" "};
	int inicio=0,fim=4,n=5;

	
	cout << " estes sao os vetores a ser ordenados " << endl;
	srand (time(NULL));
	int elemento_int=rand()%100;
	for (int i = 0; i < 50000; i++) {
		
		vetor_int[i]=elemento_int;
		cout<<"|"<<vetor_int[i]<<"|";
	}
	cout << endl;
         float elemento_float=rand()%10;
	for (int i = 0; i < 10; i++) {
		
		vetor_float[i]=elemento_float;
		cout<<"|"<<vetor_float[i]<<"|";
	}
	char elemento_char=rand()%26;
	cout<<endl;
		for (int i = 0; i < 100; i++) {
		
		vetor_char[i]=elemento_char;
		cout<<"|"<<vetor_char[i]<<"|";
	}
	
	cout << "Este saos os vetores  ordenados com insertion: inteiro, real e caracteres" << endl;
        insertion_sort<int,int>(vetor_int, 50000);
	cout << endl;
	mostra_vetor<int>(vetor_int, 50000);
	cout << endl;
	insertion_sort<float,int>(vetor_float,10);
        mostra_vetor<float>(vetor_float,10);
	cout << endl;
	insertion_sort<char,int>(vetor_char,100);
	mostra_vetor<char>(vetor_char,100);
	cout << endl;
	
	


	cout << "Este saos os vetores  ordenados com quick sort: inteiro, real e caracteres" << endl;
	quick_sort(vetor_int, 0, 50000);
	mostra_vetor<int>(vetor_int, 50000);
	cout << endl;
	quick_sort(vetor_float,0,10);
	mostra_vetor<float>(vetor_float, 10);
	cout << endl;
	quick_sort(vetor_char, 0, 100);
	mostra_vetor<char>(vetor_char, 100);
	system("pause");
}








#endif
