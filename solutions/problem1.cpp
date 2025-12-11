#include <iostream>
#include <fstream>
#include <vector>
#include<string>
using namespace std;

int main() {
    ifstream gridFile("inputs/grid.txt");
    ifstream dirFile("inputs/directions.txt");

    vector<string> grid;
    vector<char> dirs;
    vector<int> steps;

    string row;
    char d;
    int k;

 
    while (getline(gridFile, row))
        if (!row.empty()) grid.push_back(row);

    while (dirFile >> d >> k) {
        dirs.push_back(d);
        steps.push_back(k);
    }

    for (int i = 0; i < grid.size(); i++) {
        string &s = grid[i];
        int n = s.size();
        int shift = steps[i] % n;

        if (dirs[i] == 'L') {
            s = s.substr(shift) + s.substr(0, shift);
        } else {
            s = s.substr(n - shift) + s.substr(0, n - shift);
        }
    }

    string mid = grid[grid.size() / 2];

  
    int sum = 0;
    for (char c : mid) sum += c;

    
    cout << hex << sum;
}
