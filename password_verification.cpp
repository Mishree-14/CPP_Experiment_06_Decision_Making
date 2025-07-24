//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
#include<string>
#include<cctype>
using namespace std;

bool isStrongPassword(string pass) {
bool hasUpper = false, hasLower = false, hasDigit = false, hasSymbol = false;

for (char ch : pass) {
    if (isupper(ch)) hasUpper = true;
    else if (islower(ch)) hasLower = true;
    else if (isdigit(ch)) hasDigit = true;
    else if (ispunct(ch)) hasSymbol = true;
}

return (hasUpper && hasLower && hasDigit && hasSymbol);
}
int main() {
    string password;
    string user_password;
    int chances = 3;
    
    cout << "---- PASSWORD SETUP ----\n";
    cout<<"NOTE: The password should consists of uppercase,lowercase,number and symbol.";
    while(true){
        cout<<"\n"<<"Set your password: ";
        cin>>password;
    
            if (isStrongPassword(password)) {
                cout<<"Password accepted.\n";
                break;
            } else {
                cout << "Weak password! Please follow the rules.\n";
            }
    }    
            
    cout << "---- PASSWORD VERIFICATION ----\n";    
    cout<<"\n"<<"You will get 3 chances to re-enter your password for our verification!";
    while (chances>0){
        cout<<"\n"<<"Re-enter your password: ";
        cin>>user_password;
            if (user_password==password){
                cout<<"\n"<<"Passwod verification successful!";
                break;
            }
            else {
                chances--;
                if(chances>0){
                    cout<<"\n"<<"You have "<<chances<< " chances left";
                }
                else{
                    cout<<"\n"<<"You have 0 chances left!Access Denied!\n";
                    cout<<"\n"<<"You can try after 24 hours!"<<"\n"<<"For now BYEEE!";
                }
            }
    }
    return 0;
}
