#include <iostream>
#include <string>

using namespace std;

int main(){

    string input{};
    cout << "Enter string: ";
    cin >> input;
    
    int num_letters = input.length();
    int counter {0};

    // for each letter in the string
    for (char c: input) {

        int num_spaces = num_letters - counter;
        while (num_spaces > 0) {
            cout << " ";
            num_spaces--;
        }

        // Display in order up to the current character
        for (int i{0}; i < counter; i++) {
            std::cout << input[i];
        }

        // Display the current 'center' character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int i{counter-1}; i >= 0; i--) {
            // You can use this line to get rid of the size_t vs int warning if you want
            cout << input[i];
        }

        cout << endl; // Don't forget the end line
        counter++;
    }

    return 0;
}
