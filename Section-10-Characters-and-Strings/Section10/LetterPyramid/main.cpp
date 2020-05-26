#include <iostream>
#include <string>

using namespace std;

int main(){

    string input{};
    cout << "Enter string to build a pyramid: ";
    cin >> input;
    
    int length_input = input.length();
    int counter {0};

    // Move though the word
    for (char c: input) {

        // Print spaces
        int num_spaces = length_input - counter;
        while (num_spaces > 0) {
            cout << " ";
            num_spaces--;
        }

        // Print previous letters to the char we are in the "for" loop
        for (int i{0}; i < counter; i++) {
            cout << input[i];
        }

        // Print char of "for"
        cout << c;

        // Print after 
        for (int i{counter-1}; i >= 0; i--) {
            cout << input[i];
        }

        cout << endl; // Don't forget the end line
        counter++;
    }

    return 0;
}
