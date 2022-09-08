#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int>number;
    int x;//its x
    cout << "What size would you like your vector to be: " << endl;
    cin >> x; //u enter the x
    number.resize(x);// x becomes ur vector new size
    for(int i=0;i<number.size();i++) //it can be "i<=number.size()" OR "i<=x" because after
    {                                                    //"number.resize() comment x = number.size()
        cout << "Your element number " << i << ": ";
        cin >> number[i]; //THAT'S HOW U ENTER THE ELEMENTS OF YOUR VECTOR
    }
    for (int i=0;i<number.size();i++)//to show elements we use the same forloop that we had used before to enter them
    {
        cout << "(already in vector)Your element number " << i << ": " << number[i] << endl; //THAT'S HOW URE SUPPOSE TO SHOW ELEMENTS

    }
    return 0;
}
