#ifndef DIONISIO_H
#define DIONISIO_H

#include <iostream>
using std::cout;
using std::endl;
#include "buscas.h"     /**< Arquivo com funções de buscas */
#include "ordenacoes.h" /**< Arquivo com funções de ordenação */

namespace edb1 {
    /**
    * @class   Lista dionisio.h
    * @brief   Classe que representa uma lista encadeada
    * @details Os atributos de uma lista são: dado e prox
    */  
    template<typename T>
    class Lista {
    private:
        T *dado;                                            /**< Dado */
        Lista *prox;                                        /**< Próximo */
    public:
        Lista();                                            /**< Construtor padrão */
        Lista(T valor);                                     /**< Construtor especifico */
        ~Lista();                                           /**< Destrutor padrão */
        T *getValor();                                      /**< Retorna o valor */
        int getTamanho();                                   /**< Retorna a quantidade de itens na lista */
        void Insere(T valor);                               /**< Insere um valor na lista */
        void RemovePos(int pos);                            /**< Remove um valor na posição informada */
        void RemoveVal(T *valor);                           /**< Remove um valor específico */
        Lista *Busca(T *valor);                             /**< Procura um valor e retorna o nó */
        T *Posiciona(int pos);                              /**< Retorna o elemento na posição dada */
        Lista *getProximo();                                /**< Retorna o próximo nó */
        void Exibe(bool comNumeros = false);                /**< Imprime a lista */
    };

    /*
    extern "C++" void imprime(std::string frase);
    extern "C++" template<typename T> T soma(T valorA, T valorB) {
        return (valorA + valorB);
    }

    template<typename T>
    T max(T a, T b) {
        return (a > b) ? a : b;
    }

    template<typename T>
    class Teste {
        public:
            int a;
            Teste();
            Teste(T);
            void Imprimir();
    };*/
}

#endif