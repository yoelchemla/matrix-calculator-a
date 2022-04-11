#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <algorithm>
#include "doctest.h"
#include "Matrix.hpp"

using namespace zich;
using namespace std;
	
	
	Matrix zeroMat{{0 ,0 ,0 ,
                    0 ,0 ,0 ,
	                0 ,0 ,0}, 3 ,3};
	
	Matrix mat1{   {1 ,0 ,0 ,
	                0 ,1 ,0 ,
	                0 ,0 ,1 } ,3 ,3}; 

    Matrix mat1_1{ {1 ,0 ,0 ,
	                0 ,1 ,0 ,
	                0 ,0 ,1 } ,3 ,3};                 
	
	Matrix mat2{   {2 ,0 ,0 ,
	                0 ,2 ,0 ,
	                0 ,0 ,2 }, 3 ,3};
	
	Matrix mat3{    {7 , 8 ,
	                 9 , 10} ,2 ,2};
	
	Matrix mat4{   {1 , 2 ,
	                3 , 4} ,2 ,2};
	
	Matrix mat5{     {1 ,1 ,1,
	                  2 ,2 ,2,
	                  3 ,3 ,3}, 3, 3};
	
	Matrix mat6{{1 ,2 ,3},1 ,3};
	
	Matrix mat7{   {1 ,2 ,3 ,
	                4 ,5 ,6 ,
	                7 ,8 ,9} ,3 ,3};
	
	Matrix mat8{     {1,2,3,
	                  4,5,6},2,3};
	
	Matrix mat9{     {7,8,9,
	                  10,11,12},2,3};
	
	Matrix mat10{   {2,2,
	                 2,2},2,2};
	
	Matrix mat11{  {1,1,
	                1,1},2,2};
	
	Matrix mat12{   {3,3,
	                 3,3},2,2};

	Matrix mat13{   {8,10,
	                 12,14},2,2};
    
    Matrix mat14{   {-8,-10,
	                 -12,-14},2,2};    
	/** tests **/
	

TEST_CASE("opertors"){

CHECK_EQ((zeroMat+mat1) == mat2,false);
CHECK_EQ((zeroMat+mat2) == mat2,true);
CHECK_EQ((mat10+mat11) == mat12,true);
CHECK_EQ((mat3+mat4) == mat13,true);
CHECK_EQ((mat12-mat11) == mat10,true);
CHECK_EQ((zeroMat-zeroMat) == zeroMat,true);
CHECK_EQ((zeroMat+zeroMat) == zeroMat,true);

// operators big/equal, small/equal

CHECK_EQ(zeroMat>mat1,false);
CHECK_EQ(zeroMat<mat1,true);
CHECK_EQ(mat12>mat11,true);
CHECK_EQ(mat12>=mat11,true);
CHECK_EQ(mat10>=mat10,true); // the same matrix
CHECK_EQ(zeroMat<=zeroMat,true);
CHECK_EQ(mat9>mat8,true);

//check all the symbol about the two same matrix
CHECK_EQ(mat1>mat1_1,true);
CHECK_EQ(mat1<mat1_1,true);
CHECK_EQ(mat1>=mat1_1,true);
CHECK_EQ(mat1<=mat1_1,true);
CHECK_EQ(mat1!=mat1_1,false);
CHECK_EQ(mat1==mat1_1,true);




CHECK_EQ(mat1 * mat1_1 == mat1,true);
CHECK_EQ(mat1 * mat1_1 == mat1_1,true);
CHECK_EQ(zeroMat * mat1_1 == mat1,false);
CHECK_EQ(zeroMat * mat1_1 == zeroMat,true);
CHECK_EQ(mat1 * zeroMat == zeroMat,true);
CHECK_EQ(mat11 * mat12 == mat13,false);
CHECK_EQ(mat1 * mat2 == mat2,true);
CHECK_EQ(mat2 * mat1 == mat2, true);
CHECK_EQ(mat10 * mat11 == mat10,true);


mat13 *= -1;
CHECK_EQ(mat13 == mat14,true);
mat13*= zeroMat;//reset
CHECK_EQ(mat13 == zeroMat,true);

}






