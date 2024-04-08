#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the text file: ";
    cin >> filename;

    ifstream file(filename);
    
    if (!file) {
        cerr << "Error opening file. Please check the file name and try again." << endl;
        return 1;
    }

    string word;
    int count = 0;
    while (file >> word) {
        count++;
    }

    cout << "Total words in the file: " << count << endl;

    file.close();

    return 0;
}