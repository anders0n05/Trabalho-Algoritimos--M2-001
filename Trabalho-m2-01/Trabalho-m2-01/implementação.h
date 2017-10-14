#ifndef IMPLEMENTACAO_H
#define IMPLEMENTACAO_H



template<typename Z,typename A>
void insertion_sort(Z vetor[], int n) {
	int eleito; int elemento_anterior; A auxiliar;
	for (eleito = 1; eleito <= n - 1; eleito++) {

		auxiliar = vetor[eleito];
		elemento_anterior = eleito - 1;//verifica o  elemento antes do vetor eleito
		while (elemento_anterior >= 0 && auxiliar < vetor[elemento_anterior]) {//continuar trocando os elementos menores que o numero eleito

			vetor[elemento_anterior + 1] = vetor[elemento_anterior];//armazena o vetor maior que o eleito uma posicao a frente
			elemento_anterior--;
		}
		vetor[elemento_anterior + 1] = auxiliar;//armazena o valor eleito ou mantem caso o elemento anterior nao seja maior.
	}
}

// funcoes do quick sort |

template<typename X>
void alternar(X vetor[], int i, int j) {
	int auxiliar = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = auxiliar;
}
int dividir(int vetor[], int  comeco, int  fim) {//dividi o vetor ate nao ser mais possivel
	int i = comeco, j = fim;


	while (i < j) {

		while ((i < fim) && (vetor[i] <= vetor[comeco])) {
			i++;
		}
		while ((j>comeco) && (vetor[j] >= vetor[comeco])) {

			j--;

		}
		if (i < j) {
			alternar(vetor, i, j);
			i++;
			j--;
		}

	}
	alternar(vetor, comeco, j);
	return j;
}

template<typename V>
void quick_sort(V vetor[], int comeco, int fim) {
	if (comeco < fim) {

		int comparador = dividir(vetor, comeco, fim);

		quick_sort(vetor, comeco, comparador - 1);
		quick_sort(vetor, comparador + 1, fim);

	}

}



#endif








