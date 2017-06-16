#ifndef ORDENACOES_H
#define ORDENACOES_H

    using namespace std;

    namespace edb1 {
        extern "C++" template<typename T>
        void insertionSort(T *V, int N) {
            for (int ii = 0; ii < N; ii++){
                T elemento = V[ii];
                int pInsercao = ii;
                while(pInsercao > 0 && V[pInsercao - 1] > elemento){
                    V[pInsercao] = V[pInsercao - 1];
                    pInsercao--;
                }
                V[pInsercao] = elemento;
            }            
        }

        extern "C++" template<typename T>
        void selectionSort(T *V, int N) {
            int menor, troca;
            for(int i = 0; i < (N - 1); i++) {
                menor = i;
                for(int j = (i + 1); j < N; j++)
                    if(V[j] < V[menor])
                        menor = j;

                if(i != menor) {
                    troca = V[i];
                    V[i] = V[menor];
                    V[menor] = troca;
                }
            }
        }

        extern "C++" template<typename T>
        void bubbleSort(T v[], int n) {      
            int i, aux;
            bool f;
            do {
                f = false;
                for (i = 0; i < (n - 1); i++) {
                    if (v[i] > v[i + 1]) {
                        aux = v[i];
                        v[i] = v[i + 1];
                        v[i + 1] = aux;
                        f = true;
                    }
                }
            } while (f);
        }

        template<typename T>
        void merge(T arr[], int l, int m, int r){
            int i, j, k;
            int n1 = m - l + 1;
            int n2 =  r - m;
            
            T *L = new T[n1];
            T *R = new T[n2];
            
            for (i = 0; i < n1; i++)
                L[i] = arr[l + i];
            for (j = 0; j < n2; j++)
                R[j] = arr[m + 1 + j];
            
            i = 0;
            j = 0;
            k = l;
            while (i < n1 && j < n2) {
                if (L[i] <= R[j]) {
                    arr[k] = L[i];
                    i++;
                } else {
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }
        
            while (i < n1) {
                arr[k] = L[i];
                i++;
                k++;
            }
        
            while (j < n2) {
                arr[k] = R[j];
                j++;
                k++;
            }
            delete[] L;
            delete[] R;
        }

        extern "C++" template<typename T>
        void mergeSort(T arr[], int l, int r) {
            if (l < r) {
                int m = l + (r - l) / 2;
                mergeSort(arr, l, m);
                mergeSort(arr, (m + 1), r);
                merge(arr, l, m, r);
            }
        }

        extern "C++" template<typename T>
        void quickSort(T arr[], int left, int right) {
            int i = left, j = right;
            int tmp;
            int pivot = arr[(left + right) / 2];
            while (i <= j) {
                while (arr[i] < pivot)
                    i++;
                while (arr[j] > pivot)
                    j--;
                if (i <= j) {
                    tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                    i++;
                    j--;
                }
            }
            if (left < j)
                quickSort(arr, left, j);
            if (i < right)
                quickSort(arr, i, right);
        }
    }

#endif