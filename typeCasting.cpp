#include<iostream>
using namespace std;
void print(int i);
// int main()
// {
//     int a = 2, b = 5;
//     float c;
//     c = a/b; // division of two integers results in an integer.
//     cout << c << endl;
//     c = (float (a)/b); // to get the result as a floating point number we need to cast any one operand.
//     cout << c;
// }

int main()
{
    print(1);
}
void print(int i){
    if(i < 11){
        cout << i << " ";
        print(i+1);
    }
}