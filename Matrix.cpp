#include<iostream>
#include<stdexcept>
#include "Matrix.hpp"
#include<vector>
#include<string>
#include<fstream>
#include<sstream>


using namespace zich;
using namespace std;

namespace zich{

// Matrix::Matrix(const std::vector<double> &matrix, int rows, int cols){} 
// Matrix::Matrix(){}
// Matrix::~Matrix(){}

Matrix Matrix:: operator+(const Matrix & other){
    const std::vector <double> matrix = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    const int rows =3;
    const int cols =3;

return Matrix(matrix, rows, cols);
}   

Matrix Matrix:: operator+(){
    return Matrix();
}

Matrix &Matrix:: operator++(){
    return *this;
}

Matrix Matrix::operator++(int){
return Matrix();
}

Matrix Matrix:: operator+=(Matrix & other){
return Matrix();
}

Matrix Matrix:: operator-(const Matrix & other){
    return Matrix();
}

Matrix Matrix:: operator-(){
    return Matrix();
}

Matrix &Matrix::operator--(){
return *this;
}

Matrix Matrix::operator--(int){
return Matrix();
}

Matrix Matrix:: operator-=(Matrix & other){
return Matrix();
}

Matrix Matrix:: operator*(int d){
    return Matrix();
}

Matrix Matrix:: operator*=(const Matrix & other){
    return Matrix();
}

 Matrix operator*(int d, const Matrix &martix){
     return Matrix();
}
    
Matrix Matrix:: operator*=(int d){///
    Matrix mat = *this;
     return mat;
}
    Matrix Matrix:: operator *(const Matrix &matrix){
         return Matrix();
    }

Matrix  operator *=(int d, Matrix &matrix){
    return Matrix();
}

bool Matrix:: operator <(const Matrix & other)const{
    return true;
}

bool Matrix:: operator <=(const Matrix & other)const{
    return true;
}

bool Matrix:: operator >(const Matrix & other)const{
    return true;
}

bool Matrix:: operator >=(const Matrix & other)const{
    return true;
}

bool Matrix:: operator ==(const Matrix & other)const{
    return true;
}

bool Matrix:: operator !=(const Matrix & other)const{
    return true;
}

std:: istream &operator>>(std:: istream &input, Matrix& matrix){

    return input;
}

std:: ostream &operator<<(std:: ostream &output,const Matrix& matrix){
    return output;
}
}
