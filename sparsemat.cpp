//
// Created by Ricardo on 24/06/2023.
//

#include "sparsemat.h"
SparseCSR::SparseCSR(const Mat& fullMat) {
    int m = fullMat.size(); //número de filas
    ncols = fullMat[0].size();
    int i, j; //número de columnas
    int NNZ = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < ncols; j++) {
            if (fullMat[i][j] != 0) {
                valA.push_back(fullMat[i][j]); //agrega o incerta elementos al final de un contenedor dinámico en el vector val
                JA.push_back(j); //j inserta j en el vector col_ind

                // Count Number of Non Zeronumero de recuento distinto de cero
                // Elementos en la fila i
                NNZ++; // NNZ=CONT
            }
        }
        IA.push_back(NNZ); //agrega elemento de nz al vector row_ptr
    }
}

void SparseCSR::PrintValA(char* msg){
    std::cout << msg << "[ ";
    for_each(this->valA.begin(), this->valA.end(), [](int a) {
        std::cout << a << " ";
    });
    std::cout << "]" << std::endl;
}

void SparseCSR::PrintIA(char* msg){
    std::cout << msg << "[ ";
    for_each(this->IA.begin(), this->IA.end(), [](int a) {
        std::cout << a << " ";
    });
    std::cout << "]" << std::endl;
}

void SparseCSR::PrintJA(char* msg){
    std::cout << msg << "[ ";
    for_each(this->JA.begin(), this->JA.end(), [](int a) {
        std::cout << a << " ";
    });
    std::cout << "]" << std::endl;
}
int SparseCSR::NCols(){
    return this->ncols;
}

int SparseCSR::NRows(){
    return this->nrows;
}


void vecMatProduct(const Vec& vect, SparseCSR& mat, Vec& C ){
 int n = mat.NCols();
 int m = mat.NRows();
}