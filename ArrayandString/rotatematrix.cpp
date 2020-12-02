#include<iostream>
using namespace std;

void rotate(int **matrix, int matrixSize, int* matrixColSize){

    int p = *matrixColSize;
}

int main(){

    //声明的时候可以不指定行数，但是必须指定列数
    int matrix[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int* m[3];
    m[0] = matrix[0];
    m[1] = matrix[1];
    m[2] = matrix[2];
    rotate(m,3,*matrix);
    return 0;
}