#include <iostream>

using namespace std;

int main(){
    int* pointer = new int();

    cout << "enter the value of int: " << endl;
    cin >> * pointer;

    string* mine = new string();
    cout << "Enter the string characters :" << endl;
    cin >> *mine;

    cout << "The value of int value is : "<< *pointer <<endl;
    cout << "The value of string value is : "<< *mine;
    delete pointer;
    delete mine;


    return 0;
}
