// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

int main() {
    
    std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    std::string secret_message{};
    std::cout << "Enter a secret message: ";
    std::getline(std::cin, secret_message);
    
    std::string encrpyted_message{secret_message};
    
    std::cout << "\nEncrypting message..." << std::endl;

    for (size_t i{0}; i < secret_message.length(); i++){
        size_t position = alphabet.find(secret_message[i]);
        if(position != std::string::npos) {
            encrpyted_message[i] = key[position];
        }
    }
    
    std::cout << "Secret message is : " << secret_message << std::endl;
    std::cout << "Encrypted message is : " << encrpyted_message << std::endl;
    
    std::cout << "\nDecrypting message back..." << std::endl;
    
    for (size_t i{0}; i < encrpyted_message.length(); i++){
        size_t position = key.find(encrpyted_message[i]);
        if(position != std::string::npos) {
            encrpyted_message[i] = alphabet[position];
        }
    }
    
    std::cout << "Decrypted message is : " << encrpyted_message << std::endl;

    
    std::cout << std::endl;
    return 0;
}

