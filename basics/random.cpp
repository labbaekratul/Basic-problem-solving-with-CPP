#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;
    int result = a;
    for (int i = 1; i < b; i++)
    {
        result *= a;
    }
    
    cout << result;
    return 0;
}
