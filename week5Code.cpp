#include <iostream>
using namespace std;

int main(){

    string s = "The big bang theory";
    // pring # of words and characters.
    // Expected output: 4, 16
    
    int words = 0;
    int characters = 0;

    for(int i=0; i < s.length(); i++)
    {
        cout << s[i] << "";

        if (s[i] == ' ')
        {
            words++;
        }
    }

    cout << "Number of words = " << words << endl;
    cout << "Number of characters = " << s.length() - 3 << endl;
    
    characters = s.length() - 3;

    return 0;
}