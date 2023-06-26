//
// Created by Ricardo on 24/06/2023.
#ifndef SPARSEMATRIX_SPARSEMAT_H
#define SPARSEMATRIX_SPARSEMAT_H

#include "libreria.h"
#include <iostream>
//#include <vector>
class SparseCSR {
    public:
    SparseCSR(const Mat &fullMat);
    void PrintValA(char* msg);
    void PrintIA(char* msg);
    void PrintJA(char* msg);
    int NCols();
    int NRows();
    void GetIA(Vec*);
    void GetJA(Vec*);
    void GetvalA(Vec*);

private:
    int ncols;
    int nrows = IA.size()-1;
    Vec valA;
    Vec IA;
    Vec JA;
};

void vecMatProduct(const Vec& vect, SparseCSR& mat, Vec& C );


#endif //SPARSEMATRIX_SPARSEMAT_H
