#include <vector>
#include <algorithm>
#include <iostream>


typedef std::vector<int> Row;
typedef std::vector<std::vector<int>> Matrix;


bool has_8(Matrix::iterator& numbers) {
    for (Row::iterator _number = numbers->begin(); _number != numbers->end(); _number++) {
        int number = abs(*_number);

        for (; number > 0; number /= 10)
            if (number % 10 == 8)
                return true;
    }

    return false;
}


void proccess_matrix(Matrix& matrix) {
    int min = INT_MAX, max = INT_MIN;

    for (Matrix::iterator row = matrix.begin(); row != matrix.end(); row++) {
        for (Row::iterator number = row->begin(); number != row->end(); number++) {

            if (*number < min)
                min = *number;
            if (*number > max)
                max = *number;
        }
    }

    if (min + max == 0) {
        for (Matrix::iterator row = matrix.begin(); row != matrix.end(); row++)
            if (has_8(row))
                sort(row->begin(), row->end());
    }
}