//lab 9b...why isn't this labeled lab 10 i'm triggered.
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
    
    char tool [6];
    cout << "idk put in liek 7 letters maybe? You'll get some prime witchcraft : " << endl;
    for (int i=0; i <= 6; i++) {
        cin >> tool[i];
    }
    
    for (int i =6; i>= 0; i--) {
        
        char letter = ' ';
        letter = toupper(tool[i]);
        tool[i] = letter;
        cout << tool[i] << endl;
        
    }
    
    return 10;
}
