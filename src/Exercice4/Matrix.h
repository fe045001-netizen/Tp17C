#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <array>
#include <stdexcept>

using namespace std;

template<typename T, size_t N, size_t M>
class Matrix {
private:
    array<array<T, M>, N> data{};
public:
   
    T& at(size_t i, size_t j) {
        if (i >= N || j >= M)
            throw out_of_range("Erreur");
        return data[i][j];
    }

    const T& at(size_t i, size_t j) const {
        if (i >= N || j >= M)
            throw out_of_range("Erreur");
        return data[i][j];
    }

    
    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;
        for (size_t i = 0; i < N; ++i)
            for (size_t j = 0; j < M; ++j)
                result.data[i][j] = data[i][j] + other.data[i][j];
        return result;
    }

    template<size_t P>
    Matrix<T, N, P> operator*(const Matrix<T, M, P>& other) const {
        Matrix<T, N, P> result;
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < P; ++j) {
                result.at(i,j) = T{};
                for (size_t k = 0; k < M; ++k)
                    result.at(i,j) += data[i][k] * other.at(k,j);
            }
        }
        return result;
    }

    friend ostream& operator<<(ostream& os, const Matrix<T, N, M>& mat) {
        for (size_t i = 0; i < N; ++i) {
            os << "[ ";
            for (size_t j = 0; j < M; ++j)
                os << mat.data[i][j] << " ";
            os << "]\n";
        }
        return os;
    }
};

#endif

