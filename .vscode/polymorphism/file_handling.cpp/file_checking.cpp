#include <bits/stdc++.h>
using namespace std;

int main() {
    fstream file("nonexistent_file.txt", ios::in);

    // Check if the file is opened
    if (!file.is_open()) {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    file.close();
    return 0;
}