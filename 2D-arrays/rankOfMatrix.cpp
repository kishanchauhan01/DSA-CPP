#include <iostream>
#include <vector>
#include <cmath> // Include the <cmath> header for the abs() function

using namespace std;

const double EPSILON = 1e-9; // A very small value to handle precision issues

int rankOfMatrix(vector<vector<double>>& mat) {
    int n = mat.size(); // Number of rows
    int m = mat[0].size(); // Number of columns

    int rank = 0;
    vector<bool> rowSelected(n, false); // Initialize all rows as not selected

    for (int i = 0; i < m; ++i) {
        int j;
        for (j = 0; j < n; ++j) {
            if (!rowSelected[j] && abs(mat[j][i]) > EPSILON) {
                break;
            }
        }

        if (j != n) {
            ++rank;
            rowSelected[j] = true;

            for (int k = i + 1; k < m; ++k) {
                mat[j][k] /= mat[j][i];
            }

            for (int k = 0; k < n; ++k) {
                if (k != j && abs(mat[k][i]) > EPSILON) {
                    for (int l = i + 1; l < m; ++l) {
                        mat[k][l] -= mat[j][l] * mat[k][i];
                    }
                }
            }
        }
    }

    return rank;
}

int main() {
    // Example usage
    vector<vector<double>> matrix = {
        {2, 3, -1, -1},
        {1, -1, -2, -4},
        {3, 1, 3, -2},
        {6, 3, 0, -7}
    };

    int rank = rankOfMatrix(matrix);
    cout << "Rank of the matrix: " << rank << endl;

    return 0;
}
