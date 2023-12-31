//
// Created by Ricardo on 24/06/2023.
//

#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <algorithm>
#include <vector>
#include "sparsemat.h"
#include "sparsevec.h"

typedef std::vector<double> realVec;
typedef std::vector<int> intVec;
typedef std::vector<std::vector<double>> realMat;
typedef std::vector<std::vector<int>> intMat;

// Imprime matriz llena
template<class T>
void printFullMatrix(const std::vector<std::vector<T>>& M);

// Imprime vector lleno
template<class T>
void printFullVector(const std::vector<T> & V, char* msg);

// Producto de matriz dispersa con vector lleno
void spMatrixVectorProd(MatSparseCSR& spA, const realVec& fullvec, realVec& prod);

// Producto de vector lleno con matriz dispersa
void vectorSpMatProduct(const realVec& vect, MatSparseCSR& mat, realVec& C );

// Suma simbólica de vectores dispersos
void symbolicSpVecVecSum(VecSparse& A, VecSparse& B, VecSparse& out);

// Suma numérica de vectores dispersos
void NumericalSpVecVecSum(VecSparse& A, VecSparse& B, VecSparse& out);

// Suma simbólica de matrices dispersas
void spMatMatSymbolicSum(MatSparseCSR& A, MatSparseCSR& B, MatSparseCSR& Sum);

// Suma numérico de matrices dispersas
void spMatMatNumericalSum(MatSparseCSR& A, MatSparseCSR& B, MatSparseCSR& Sum);

// Producto simbólico de matrices dispersas
void spMatMatSymbolicProd(MatSparseCSR& A, MatSparseCSR& B, MatSparseCSR& prod);

// Producto numérico de matrices dispersas
void spMatMatNumericalProd(MatSparseCSR& A, MatSparseCSR& B, MatSparseCSR& prod);

void matTransposition(MatSparseCSR& A, MatSparseCSR& At);

#endif
