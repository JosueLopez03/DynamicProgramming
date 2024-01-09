#include <iostream>
#include <vector>
using namespace std;

int canSum(int targetSum, int set[], int n) {
    bool subset[n + 1][targetSum + 1];

    for (int i = 0; i <= n; i++) {
        subset[i][0] = true;
    }

    for (int i = 1; i <= targetSum; i++) {
        subset[0][i] = false;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= targetSum; j++) {
            if (j < set[i - 1]) {
                subset[i][j] = subset[i - 1][j];
            }
            if (j >= set[i - 1]) {
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
            }
        }
    }
    return subset[n][targetSum];
}

/* Basic approach
bool canSum(int targetSum, vector<int> numbers) {
    if (targetSum == 0) return true;
    if (targetSum < 0) return false;

    for (int i = 0; i < numbers.size(); i++) {
        int remainder = targetSum - numbers[i];
        if (canSum(remainder, numbers) == true) {
            return true;
        }
    }
    return false;
}
*/

int main() {
    int set[] = { 7, 14 };
    int sum = 300;
    int n = sizeof(set) / sizeof(set[0]);

    if (canSum(sum, set, n) == true) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    return 0;
}