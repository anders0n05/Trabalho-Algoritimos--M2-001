#ifndef IMPLEMENTACAO_H
#define IMPLEMENTACAO_H




void insertion_sort(int vetor[], int n) {
	int eleito, elemento_anterior, auxiliar;
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









#endif
