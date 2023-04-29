#include "LinearGraph.h"

LinearGraph::LinearGraph() : GraphBase() {};

LinearGraph::LinearGraph(const SquareMatrix & sm) {};

void LinearGraph::BuildGraphMatrix(const int size) {
    SquareMatrix & sm = getSquareMatrix();
    sm.BuildVectorOfVectors(size);

    sm.BuildIdentityMatrix(size);

    for (int i = 0; i < size -1; i++) {
        sm.matrix[i][i+1] = 1;
    }
}