#include <iostream>
using namespace std;

int main(){
    int saisi;
    cin >> saisi;
    bool calc = saisi % 2 == 0 ;
    if (calc)
    {
        cout << "c'est un nombre pair";
    } 
    else{
        cout << "ce n'ai pas un nombre pair";
    }
    return 0;
}