#ifndef IMPLEMENTACAO_H
#define IMPLEMENTACAO_H



template<typename C>
C dividir_vetor(C vetor[],int inicio, int fim) {
	int antes_pivo, depois_pivo, aux;
	antes_pivo = inicio;
	depois_pivo =fim;
	pivo = vetor[inicio];
	while (antes_pivo < depois_pivo) {
		while (vetor[antes_pivo] <= pivo) {//procurar valores menores que o pivo;
			antes_pivo++;
		 }
		while (vetor[depois_pivo] > pivo) {//procurar valores maiores que o pivo;
			depois_pivo--;
		}

		if (antes_pivo < depois_pivo) {

			aux = vetor[depois_pivo];
			vetor[antes_pivo] = vetor[depois_pivo];
			vetor[depois_pivo] = aux;
		}
	}
	vetor[inicio] = vetor[depois_pivo];
	vetor[depois_pivo] = pivo;//ver se precisa disso pois la encima o pivo=vetor[inicio
	return depois_pivo;
}




template<typename A>
A quick_sort(A vetor[],int inicio,int fim) {

	if (fim > inicio){
		pivo = dividir_vetor(vetor,inicio,fim);
	quick_sort(vetor, inicio, pivo - 1); //ordenar elementos antes do pivo
	quick_sort(vetor, pivo + 1, fim);//ordenar elementos depois do pivo
	}

}



#endif
