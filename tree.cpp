#include <iostream>
using namespace std;
 
int main(void)
{    
    int Y;
    cin >> Y;
    for (int i = 3; i <= Y; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == i) {
                for(int z = 0; z <= Y - j - 1; ++z) {
                    cout << " ";
                }
                cout << "$";
            } else {
                for(int z = 0; z <= Y - j; ++z) {
                    cout << " ";
                }
            }
            for(int z = 0; z <= 2 * j; ++z) {
                cout << "*";
            }
            if (j == i) {
                cout << "$";
            }
            cout << "\n";
        }
    }
    cout << "\n";
}