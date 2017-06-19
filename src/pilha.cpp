#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
#include "dionisio.h"

namespace edb1 {
    template class Pilha<int>;
    template class Pilha<float>;
    template class Pilha<double>;
    template class Pilha<string>;

    /**
    * @details Os valores de dados e max são inicializados com o tamanho
    *          informado e a qtde com 0
    */
    template<typename T>
    Pilha<T>::Pilha(int tam) {
        dados = new T[tam];
        max = tam;
        qtde = 0;
    }

    /**
    * @details Destrutor padrão
    */
    template<typename T>
    Pilha<T>::~Pilha() {
        delete[] dados;
    }

    /**
    * @details Inserir um dado na pilha
    */
    template<typename T>
    void Pilha<T>::Push(T val) {
        if(!Cheio())
            dados[qtde++] = val;
    }
    
    /**
    * @details Retirar um dado da pilha
    */
    template<typename T>
    T Pilha<T>::Pop() {
        if(!Vazio())
            return dados[--qtde];
        else
            return dados[0];
    }

    /**
    * @details Testa se a pilha está vazia
    */
    template<typename T>
    bool Pilha<T>::Vazio() {
        return (qtde == 0);
    }

    /**
    * @details Testa se a pilha está cheia
    */
    template<typename T>
    bool Pilha<T>::Cheio() {
        return (qtde == max);
    }
}