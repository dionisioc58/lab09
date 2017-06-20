/**
* @file     main.cpp
* @brief 	Arquivo fonte para execução do projeto
* @author   Dionísio Carvalho (dionisio@naracosta.com.br)
* @since    20/06/2017
* @date     20/06/2017
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dionisio.h"

using namespace std;
using namespace edb1;

/**
* @brief        Função principal do programa
* @param[in]	argc	Quantidade de argumentos
* @param[in]    *argv[]	Lista de argumentos
* @return		Retorno
*/
int main(int argc, char* argv[]) {
    //Testa a classe lista
    cout << "Teste de lista ligada" << endl;
    Lista<int> *nova = new Lista<int>();
    nova->Insere(12);
    nova->Insere(22);
    nova->Insere(32);
    nova->Exibe();

    //Testa a classe pilha
    cout << "Teste de pilha" << endl;
    Pilha<int> piula(3);
    piula.Push(30);
    piula.Push(40);
    piula.Push(55);
    while(!piula.Vazio())
        cout << piula.Pop() << endl;

    //Testa a classe fila
    cout << "Teste de fila" << endl;
    Fila<int> fila(3);
    fila.Push(30);
    fila.Push(40);
    fila.Push(55);
    while(!fila.Vazio())
        cout << fila.Pop() << endl;

    //Testa as buscas
    cout << "Testes de buscas" << endl;
    int V[100];
    for(int i = 0; i < 100; i++)
        V[i] = i + 1;
    cout <<  linear_search_i(V, 0, 100, 30) << endl;
    cout <<  linear_search_r(V, 0, 100, 60) << endl;
    cout <<  binary_search_i(V, 0, 100, 30) << endl;
    cout <<  binary_search_r(V, 0, 100, 60) << endl;
    cout << ternary_search_i(V, 0, 100, 30) << endl;
    cout << ternary_search_r(V, 0, 100, 60) << endl;

    //Testa as ordenações

    srand(time(NULL));
    double *X = new double[10];
    //Inicializa aleatoriamente
    cout << "Insertion sort" << endl;
    for(int i = 0; i < 10; i++)
        X[i] = rand() % 100;
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    //Ordena o vetor
    cout << "Ordena com insertion sort" << endl;
    insertionSort(X, 10);
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    //Inicializa aleatoriamente
    cout << "Selection Sort" << endl;
    for(int i = 0; i < 10; i++)
        X[i] = rand() % 100;
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    //Ordena o vetor
    cout << "Ordena com selection sort" << endl;
    selectionSort(X, 10);
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    //Inicializa aleatoriamente
    cout << "Merge sort" << endl;
    for(int i = 0; i < 10; i++)
        X[i] = rand() % 100;
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    //Ordena o vetor
    cout << "Ordena com merge sort" << endl;
    mergeSort(X, 0, 9);
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    //Inicializa aleatoriamente
    cout << "Quick Sort" << endl;
    for(int i = 0; i < 10; i++)
        X[i] = rand() % 100;
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    //Ordena o vetor
    cout << "Ordena com quick sort" << endl;
    quickSort(X, 0, 9);
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    //Inicializa aleatoriamente
    cout << "Bubble Sort" << endl;
    for(int i = 0; i < 10; i++)
        X[i] = rand() % 100;
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    //Ordena o vetor
    cout << "Ordena com bubble sort" << endl;
    bubbleSort(X, 10);
    //Exibe o vetor
    for(int i = 0; i < 10; i++)
        cout << X[i] << "  ";
    cout << endl;

    return 0;
}