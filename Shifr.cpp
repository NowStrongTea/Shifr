#include <iostream>
using namespace std;

int main() {
    char shifr[100], ch;
    int i, key;
    cout << "*Encryption*\n";
    cout << "Enter a message for the encryption: ";
    cin.getline(shifr, 100);
    cout << "Enter key: ";
    cin >> key;
    for(i = 0; shifr[i] != '\0'; ++i){
        ch = shifr[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            shifr[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            shifr[i] = ch;
        }
    }

    cout << "Encrypted message: " << shifr ;

    cout << "\n*Decryption*\n";
    for(i = 0; shifr[i] != '\0'; ++i){
        ch = shifr[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - key;
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            shifr[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - key;
            if(ch < 'A'){
                ch = ch + 'Z' - 'A' + 1;
            }
            shifr[i] = ch;
        }
    }
    cout << "Decrypted message: " << shifr;
}
