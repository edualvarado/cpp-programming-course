#include <iostream>
#include <string>

using namespace std;

int main(){

    string input{};
    cout << "Enter string to build a pyramid: ";
    cin >> input;
    
    int length_input = input.length();
    int counter {0};

    do{
        // Print spaces at the beginning
        int num_spaces = length_input - counter;
        while (num_spaces > 0) {
            cout << " ";
            num_spaces--;
        }
        
        // Print before the middle
        for (int i{0}; i < counter; i++) {
            cout << input[i];
        }
        
        // Print middle of the line
        cout << input[counter];
        
        // Print backwards after the middle
        for (int i{counter-1}; i >= 0; i--) {
            cout << input[i];
        }

        cout << endl;         
        counter++;
    } while(counter < length_input); 
    
    return 0;
}
