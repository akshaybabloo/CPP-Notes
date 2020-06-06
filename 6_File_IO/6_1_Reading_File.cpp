// File IO

#include <iostream>
#include <fstream> // Used to read and write files

using namespace std;

int main() {

    ifstream file; // ifstream - input file stream
    file.open("file.txt"); // Opening the file

    string data;

    if (!file.fail()) { // Checks if the file exists
        cout << "The contents of the file are:";
        while (file.good()) { // Checks if state of stream is good
            file >> data; // Write the contents of file to string "data"
            cout << " " << data; // Print it to the console
        }
    } else {
        cout << "File not found." << endl;
    }
    file.close(); // Close the file once read.

    return 0;
}