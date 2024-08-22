#include<iostream>
#include<cstring>
using namespace std;

class Name
{
    char name[50];
    public: 
        Name(){
                cout << "Enter name: ";
                cin.getline(name, 50);
                cout << "Entered name is " << name << endl; 
        }
};
int main()
{
    Name n1;
    return 0;
}
