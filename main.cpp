#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main() {
    char passwd[] = "";
    char email[] = "";
    char username[] = "";
    bool eightChar = false;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasNum = false;
    bool hasSpecial = false;
    bool hasEmail = false;
    bool hasUsername = false;
    
    cout << "Enter Password: ";
    cin >> passwd;


    for (int i = 0; i < strlen(passwd); i++) {
        if (isupper(passwd[i])) {
            hasUpper = true;
        }
        if (islower(passwd[i])) {
            hasLower = true;
        }
        if (isdigit(passwd[i])) {
            hasNum = true;
        }
        if (strlen(passwd) >= 8) {
            eightChar = true;
        }
        if (ispunct(passwd[i])) {
            hasSpecial = true;
        }

    }
    if (eightChar){
        cout << "Password is at least 8 characters long. √" << endl;
    } else {
        cout << "Password is not at least 8 characters long. X" << endl;
    }
    if (hasUpper){
        cout << "Password contains at least one uppercase letter. √" << endl;
    } else {
        cout << "Password does not contain at least one uppercase letter. X" << endl;
    }
    if (hasLower){
        cout << "Password contains at least one lowercase letter. √" << endl;
    } else {
        cout << "Password does not contain at least one lowercase letter. X" << endl;
    }
    if (hasNum){
        cout << "Password contains at least one number. √" << endl;
    } else {
        cout << "Password does not contain at least one number. X" << endl;
    }
    if (hasSpecial){
        cout << "Password contains at least one special character. √" << endl;
    } else {
        cout << "Password does not contain at least one special character. X" << endl;
    }
    if (eightChar && hasUpper && hasLower && hasNum){
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is invalid." << endl;
    }
}
