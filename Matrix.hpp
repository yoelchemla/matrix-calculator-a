#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<stdexcept>
#include<unordered_map>
#pragma once
// using namespace std;
// using namespace zich;

namespace zich{
 
class Matrix{
    
    private:

        std::vector<double>matrix;
        int rows;
        int cols;
    
    
    public:
  
    Matrix(const std::vector<double> matrix, int rows, int cols){
        if(rows<=0 || cols<=0){
            throw std:: invalid_argument("the arguments need to be at least 1");
        }
        this->matrix = matrix;
        this->rows = rows;
        this->cols = cols;
    }
    Matrix(){}
    //~Matrix(){}
    

    Matrix operator+(const Matrix & other);//v
    Matrix operator +();//v
    Matrix& operator++();//V
    Matrix operator++(int);//v
    Matrix operator+=(Matrix & other);//v

    Matrix operator-(const Matrix & other);//v
    Matrix operator -();//v
    Matrix& operator--();//v
    Matrix operator--(int);//v
    Matrix operator-=(Matrix & other);//v
    
    Matrix operator*(int d); //v
    Matrix operator*=(const Matrix & other);//v
    friend Matrix operator*(int d, const Matrix &martix);//v
    Matrix operator*=(int d);//v///
    Matrix operator *(const Matrix &matrix);//v
    friend Matrix operator *=(int d, Matrix &matrix);//v
   
    bool operator <(const Matrix &other)const;
    bool operator <=(const Matrix &other)const;
    bool operator >(const Matrix &other)const;
    bool operator >=(const Matrix &other)const;
    bool operator ==(const Matrix &other)const;
    bool operator !=(const Matrix &other)const;

    friend std:: istream &operator>>(std:: istream &input, Matrix& other);  //cin
    friend std:: ostream &operator<<(std:: ostream &output, const Matrix& other); //cout

    };

}
