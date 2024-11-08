#include <iostream>
#include "read_matrix.hpp"
#include "proccess_matrix.hpp"
using namespace std;


typedef vector<int> Row;
typedef vector<vector<int>> Matrix;


int main() {
    unsigned int n;
    cin >> n;

    Matrix matrix(n, Row(n));
    read_matrix(matrix);
    proccess_matrix(matrix);

    cout << endl;

    for (Matrix::iterator row = matrix.begin(); row != matrix.end(); row++) {
        for (Row::iterator number = row->begin(); number != row->end(); number++)
            cout << *number << ' ';

        cout << '\n';
    }
}
