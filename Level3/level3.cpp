#include <iostream>
/**
    canYouFindMe Level3 Example
    level3.cpp
    Purpose:

    @author Oguz BAKIR
    @version 1.0 7/5/18
*/

using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key[3] = {'K', 'E', 'Y'}; //Any chars will work
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];
    
    return output;
}

int main() {

    string encrypted = encryptDecrypt("message");
    cout << "Encrypted message = " << encrypted << endl;

    string decrypted = encryptDecrypt(encrypted);
    cout << "Non-Encrypted message = " << decrypted << endl;

    return 0;
}