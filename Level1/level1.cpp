#include <iostream>

/**
    canYouFindMe Level1 Example
    level1.cpp
    Purpose:

    @author Oguz BAKIR
    @version 1.0 6/11/17
*/


using namespace std;

int main() {

    string toEncrypt = "Message"; //Our string to be encrypted
    char keyToEncrypt = '0'; //Our key that to used in encryption

    for(int i = 0; i < toEncrypt.size(); i++)  //For every char in toEncrypt string
        toEncrypt[i] ^= keyToEncrypt;
    cout << "Encrypted message = " << toEncrypt << endl;

    for(int i = 0; i < toEncrypt.size(); i++) //Decrypting string to be sure it is correctly encrypted
        toEncrypt[i] ^= keyToEncrypt;
    cout << "Non-Encrypted message = " << toEncrypt << endl;
    return 0;
}