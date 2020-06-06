// File IO

#include <iostream>
#include <fstream> // Used to read and write files

using namespace std;

int main() {

    ofstream file; // ofstream - output file stream
    file.open("textFile.txt",
              ios::app); // Opening the file and append it (if exists)

    string data = "This is a string";

    if (!file.fail()) { // Checks if the file exists
        file << data << endl; // Write the contents of data to file
    } else {
        cout << "File not found." << endl;
    }
    file.close(); // Close the file once read.

    return 0;
}