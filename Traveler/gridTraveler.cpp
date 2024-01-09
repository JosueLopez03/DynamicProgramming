#include <iostream>
using namespace std;

/*
long long gridTraveler(int m, int n) {
    if (m == 1 && n == 1) return 1;
    if (m == 0 || n == 0) return 0;
    return gridTraveler(m - 1, n) + gridTraveler(m, n - 1);
}
*/
long long gridTraveler(int m, int n) {
    long long grid[m][n];
    int i, j;

    for (i = 0; i < m; i++) {
        grid[i][0] = 1;
    }

    for (j = 0; j < n; j++) {
        grid[0][j] = 1;
    }
    
    for (i = 1; i < m; i++) {
        for (j = 1; j < n; j++) {
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
        }
    }
    return grid[m - 1][n - 1];
}


int main() {
    int user_row, user_col;

    cout << "Enter a row: "; cin >> user_row;
    cout << "Enter a column: "; cin >> user_col;
    cout << "Coordinate (" << user_row << "," << user_col << ")" << endl;
    cout << "Possible paths: " << gridTraveler(user_row, user_col);
    cout << endl;

    return 0;
}