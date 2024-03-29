#include "SquareMatrix.h"

SquareMatrix::SquareMatrix() {
}

vector<vector<Pair<BigInt>>> SquareMatrix::getVectorOfVectors(int rows_cols) {
    vector<vector<Pair<BigInt>>> vOfV;
    for (int i = 0; i < rows_cols; i++) {
        vOfV.push_back(vector<Pair<BigInt>>(rows_cols));
    }

    return vOfV;
}

void SquareMatrix::zeroMatrix(vector<vector<Pair<BigInt>>> matrix, int rows_cols) {
    for (int i = 0; i < rows_cols; i++) {
        for (int j = 0; j < rows_cols; j++) {
            matrix[i][j] = Pair<BigInt>(0,1);
        }
    }
}

vector<vector<Pair<BigInt>>> SquareMatrix::MatrixMult(vector<vector<Pair<BigInt>>> left_matrix, vector<vector<Pair<BigInt>>> right_matrix) {
    int rows = left_matrix.size();
    int cols = rows; // square matrix

    vector<vector<Pair<BigInt>>> vOfV = getVectorOfVectors(rows);

    cout << "rows: " << rows << "size: " << vOfV.size() << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; i++) {
            Pair<BigInt> t = Pair<BigInt>(0,1);
            for (int k = 0; k < cols; k++) {
                Pair<BigInt> temp;
                temp = left_matrix[i][k] * right_matrix[k][j];
                t = t + temp;
                cout << "left[" << i << "][" << k << "] = " << left_matrix[i][k] << endl;
                cout << "left[" << k << "][" << j << "] = " << right_matrix[k][j] << endl;
                cout << "Product: " << temp << endl;
            }
            cout << "dot product: " << t << " ";
            cout << endl;
            vOfV[i][j] = t;
        }
    }

    return vOfV;
}

vector<vector<Pair<BigInt>>> SquareMatrix::BuildIdentityMatrix(int size) {

    vector<vector<Pair<BigInt>>> vOfV = getVectorOfVectors(size);

    zeroMatrix(vOfV, size);
    
    Pair<BigInt> ONE = Pair<BigInt>(1,1);

    for (int i = 0; i < size; i++) {
        vOfV[i][i] = ONE;
    }

    return vOfV;
}