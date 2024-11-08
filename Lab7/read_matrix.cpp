#include <iostream>
#include <vector>


typedef std::vector<int> Row;
typedef std::vector<std::vector<int>> Matrix;


void read_matrix(Matrix& matrix) {
    for (Matrix::iterator row = matrix.begin(); row != matrix.end(); row++)
        for (Row::iterator number = row->begin(); number != row->end(); number++)
            std::cin >> *number;
}