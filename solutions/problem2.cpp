#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

int main() {
    ifstream file("inputs/input2.txt");
    string s;
    getline(file, s); 

  
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }

    string removed = "";
    for (int i = 0; i < rev.length(); i++) {
        if ((i + 1) % 3 != 0) {  
            removed += rev[i];
        }
    }

    string shifted = "";
    for (char c : removed) {
        shifted += char(c + 2);
    }

    int count = 0;
    for (char c : shifted) {
        if (isVowel(c))
            count++;
    }

    cout << "Clue 2 = " << count << endl;
    return 0;
}
