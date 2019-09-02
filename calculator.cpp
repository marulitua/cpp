#include <iostream>

using namespace std;

int main ()
{
    // initialize `result` variable
    float a, b, result = 0;
    char operate;

    cout << "This is a simple calculator! \n";
    cout << "Input your first number : \n";
    cin >> a;
    cout << "+ , - , * , or /" << endl;
    cin >> operate;
    cout << "Input your second number : \n";
    cin >> b;

    // do the operation
    switch (operate) {
      case '+' :
        cout << ( result =  a + b ) << endl;
        break;

      case '-' :
        cout << ( result = a - b ) << endl;
        break;

      case '*' :
        cout << ( result = a * b ) << endl;
        break;

      case '/' :
        cout << ( result = a / b ) << endl;
        break;

      default :
        cout << "math error!" << endl;
    }

    // then print the result
    cout << a << operate << b << "=" << result << "\n";

    // SUCCESS
    return 0;
}
