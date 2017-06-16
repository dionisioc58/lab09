#include <iostream>
#include <cstdlib>
#include "dionisio.h"

using namespace std;
using namespace edb1;

int main() {
    //Testa a classe lista
    Lista<int> *nova = new Lista<int>();
    nova->Insere(12);
    nova->Insere(22);
    nova->Insere(32);
    nova->Exibe();

    //Testa as buscas
    int V[100];
    for(int i = 0; i < 100; i++)
        V[i] = i + 1;
    cout << "Busca 2 " << linear_search_i(V, 0, 100, 30) << endl;
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




    /*string frase = "Olá mundo!";
    Teste<int> t(10);
    cout << t.a << endl;
    
    Teste<int> t2;
    cout << t2.a << endl;
    t2.Imprimir();

    Teste<float> t3;
    cout << t3.a << endl;
    t3.Imprimir();

    imprime(frase);
    cout << "Resultado da soma 5.3 + 6.2: " << soma(5.3, 6.2) << endl;
    cout << "O maior valor entre 5 e 6: " << edb1::max(5, 6) << endl;*/

    return 0;
}