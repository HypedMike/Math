#include "linalg.h"
#include <random>
#include <iostream>

// MATRIX DECLARATION

matrix::matrix(int row, int col, char type){
    if(type != 'r'){
        throw "Command not recognised";
    }
    r = row;
    c = col;
    mat = new double *[c];
    for(int i = 0; i < c; i++){
        mat[i] = new double[r];
        for(int j = 0; j < r; j++){
            mat[i][j] = rand();
        }
    }
}
matrix::matrix(int n, char type){
    if(type != 'r'){
        throw "Command not recognised";
    }
    r = n;
    c = n;
    mat = new double *[n];
    for(int i = 0; i < n; i++){
        mat[i] = new double[n];
        for(int j = 0; j < n; j++){
            mat[i][j] = rand();
        }
    }
}
matrix::matrix(int n){
    r = n;
    mat = new double *[n];
    for(int i = 0; i < n; i++){
        mat[i] = new double[n];
        for(int j = 0; j < n; j++){
            std::cin >> mat[i][j];
        }
    }
}


// MATRIX OPERATIONS

vector matrix::product(vector v){
    
    vector res = vector(v.len, 'r');

}


// VECTOR DECLARATIONS

vector vector::zero_vector(int n){
    len = n;
    vec = new double[n];
    for(int i = 0; i < n; i++){
        vec[i] = 0;
    }
}
vector::vector(int n, char type){
    if(type != 'r'){
        throw "Command not recognised";
    }
    len = n;
    vec = new double[n];
    for(int i = 0; i < n; i++){
        vec[i] = rand();
    }
}
vector::vector(int n){
    len = n;
    vec = new double[n];
    for(int i = 0; i < n; i++){
        std::cin >> vec[i];
    }
}
vector::vector(matrix m){
    if(m.c*m.r != m.r && m.c*m.r != m.c){
        throw "Matrix is not adjustable to vector";
    }else if (m.c == 1)
    {
        len = m.r;
        vector v = zero_vector(len);
        for(int i = 0; i < len; i++){
            v.vec[i] = m.mat[i][0];
        }
    }else{
        len = m.c;
        vector v = zero_vector(len);
        for(int i = 0; i < len; i++){
            v.vec[i] = m.mat[0][i];
        }
    }  
}

