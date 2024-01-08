#include <iostream>
using namespace std;

/* Classic implementation / really slow
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
*/


// type long long for large int numbers
long long int fib (long long int n) {
    // We declare an array to store the Fibonacci sequence.
    // case, n = 0
    long long fib_arr[n + 2];

    fib_arr[0] = 0;
    fib_arr[1] = 1;

    for (int idx = 2; idx <= n; idx++) {
        fib_arr[idx] = fib_arr[idx - 1] + fib_arr[idx - 2];
    }
    return fib_arr[n];
}

int main() {
    long long int user_input;

    cout << "Enter a index: "; cin >> user_input;
    cout << "Index: " << user_input << " | ";
    cout << "Fibonacci number: " << fib(user_input);
    cout << endl;

    return 0;
}