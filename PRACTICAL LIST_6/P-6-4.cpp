#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
    // Declare variables
    
    ifstream source_file;
    ofstream destination_file;
    string line;

    // Prompt the user to enter the source file path
   
    // Open the source file
    source_file.open("test.txt");

    // Check if the source file is open
    if (!source_file.is_open()) {
        cout << "Unable to open the source file." << endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the destination file path
   

    // Open the destination file
    destination_file.open("test1.txt");

    // Check if the destination file is open
    if (!destination_file.is_open()) {
        cout << "Unable to open the destination file." << endl;
        source_file.close();
        return 1; // Exit with an error code
    }

    // Read the source file line by line and copy to the destination file
    while (getline(source_file, line)) {
        destination_file << line << endl;
    }

    // Close both files
    source_file.close();
    destination_file.close();

    cout << "File copied successfully." << endl;

    return 0; // Exit successfully
}

