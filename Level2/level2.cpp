#include <iostream>
/**
    canYouFindMe Level2 Example
    level2.cpp
    Purpose:

    @author Oguz BAKIR
    @version 1.0 6/11/17
*/

#define MODE 32

using namespace std;

int main() {


    string toEncrypt = "Message"; //Our string to be encrypted
    string keyToEncrypt = "key"; //Our key that to used in encryption

    for(int i = 0; i < toEncrypt.size(); i++)  //For every char in toEncrypt string
        toEncrypt[i] ^= keyToEncrypt[i % keyToEncrypt.size()] % MODE; // Making binary XOR calculation with key and take mode of it
    cout << "Encrypted message = " << toEncrypt << endl;

    for(int i = 0; i < toEncrypt.size(); i++) //Decrypting string to be sure it is correctly encrypted
        toEncrypt[i] ^= keyToEncrypt[i % keyToEncrypt.size()] % MODE;
    cout << "Non-Encrypted message = " << toEncrypt << endl;
    return 0;
}