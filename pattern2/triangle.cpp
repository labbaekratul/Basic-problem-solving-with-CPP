#include <iostream>
using namespace std;


int main() { 
      
    for (char i = 0; i < 5; i++)
        {
        for (int j = 5; j>=5-i; j--)
        { 
            cout << j << " ";
        }
        cout << endl;
    }

    // for (int i = 0; i < 5;i++){
    //     for (int j = 5; j <= i + j;j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
}