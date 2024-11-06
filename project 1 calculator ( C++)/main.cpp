#include <iostream>
using namespace std;

int main(){
    char op;
    int a, b;

    cout << " enter the value of a and b :" << endl;
    cin >> a >> b;

    cout << "enter operator (+ ,-,* ,/) : " << endl;
    cin >> op;

    switch (op)
    {
    case ('+'):
        cout << " a+b =  " << a + b << endl;
        break;

    case ('-'):
        cout << " a-b = " << a - b << endl;
        break;

    case ('*'):
        cout << " a/b = " << a / b << endl;
        break;

    case ('/'):
        if (b != 0){
            cout << " a*b =" << a * b << endl;
        }
        else{
            cout << " Cannot divide by zero! " << endl;
            break;
        }

    default:
        cout << "Invalid operator!" << endl;
        break;
    }

    return 0;
}
