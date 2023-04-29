#ifndef __GRAPH_BASE_H
#define __GRAPH_BASE_H

#include <iostream>
#include <string>

#include "SquareMatrix.h"

class GraphBase {
    public:
        GraphBase();
        ~GraphBase();
        GraphBase(const GraphBase & gb);
        GraphBase(GraphBase && gb);
        GraphBase & operator=(const GraphBase && gb);

        SquareMatrix & getSquareMatrix();
        virtual void BuildGraphMatrix(int size) = 0;

    private:
        SquareMatrix squareMatrix;

};

#endif