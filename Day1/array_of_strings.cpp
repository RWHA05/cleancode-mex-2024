#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Bosch", "Mexico", "Bangalore", "Canada", "India"};
    
    for(const string& word : msg)
    {
        if(word[0] == 'B' || word[0] == 'b'){cout << word << endl;}
    }

    return 0;
}
