#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

bool isComposite(int n) {
    return (n > 1 && !isPrime(n));
}

int main() {
    ifstream file("inputs/states.txt");

    int x;
    int terminalCount = 0;

    while (file >> x) {
        int state = 0;  

        if (x % 2 == 0) {
            state = 1;
        }
        else if (isPrime(x)) {
           state = 3;
        }
        else if (isComposite(x)) {
            
            state = 0;
        }

        if (state == 3) {
            terminalCount++;
        }
    }

    cout << "Clue 3 = " << terminalCount << endl;
    return 0;
}
