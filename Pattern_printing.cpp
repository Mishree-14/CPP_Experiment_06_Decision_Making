//Mishree Kalaria
//24070123052
//Btach:A2

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout<<"Enter number of rows you want to print: ";
    cin>>n;
    
    // 1. Right-angled Triangle
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    // 2. Inverted Right-angled Triangle
    for(int i = n; i >= 1;i--){
        for(int j = i; j >= 1 ; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    //3. Mirrored Right-angled Triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "*";}
        cout << "\n";
    }   
    cout<<"\n";
    
    //4. Eqilateral Triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "* ";}
        cout << "\n";
    }   
    cout<<"\n";
     
    //5.Inverted Eqilateral Triangle
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "* ";}
        cout << "\n";
    }   
    cout<<"\n";
     
    //6. Equilateral Triangle (Continous)
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n - i; j++){
            cout<<" ";
        }
        for(int j = 0; j< 2*i + 1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    //7. Diamond Pattern
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << " *";}
        cout << "\n";
    }   
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "* ";}
        cout << "\n";
    }   
    cout<<"\n";
     
    //8. Hour-Glass Pattern
    for (int i = n; i > 1; i--) {
        for (int j = 1; j <= n - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << " *";}
        cout << "\n";
    }   
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << " *";}
        cout << "\n";
    }
    cout<<"\n";
     
    // 9. Number Triangle
    int m = 1;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i ; j++){
            cout<<m<<"\t";\
            m++;
        }
        cout<<"\n";
    }
    cout<<"\n";
     
     //10. Number Pyramid
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i ; j++){
            cout<<i<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n"; 
    
    //11. Number Triangle (Mirrored)
    for (int i = 1; i <= n; i++) {
            for (int j=0; j < n - i; j++){
                cout <<" ";
            }
            for (int j=0; j < i; j++){ 
                cout << i+j;
            }
            cout <<"\n";
    }
    cout<<"\n";
    
    //12. Alphabet Pyramid (Continous)
    int num = 65;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j<= i; j++ ){
            printf("%c",num);
           num++;
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    
    //13. Alphabet Pyramid 
    for (int i = 1; i<= n; i++){
        for(int j = 1; j<= i; j++ ){
           printf("%c",64+i);
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    
    
    //14. Half Diamond Pattern 
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = n - 1; i >= 1;i--){
        for(int j = i; j >= 1 ; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    //15. Half Diamond (Mirrored)
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout <<"*";}
        cout << "\n";
    }   
    for (int i = n; i > 0; i--) {
        for (int j = 1 ; j <= n - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout <<"*";}
        cout <<"\n";
    }   
    cout<<"\n";

    return 0;
}
