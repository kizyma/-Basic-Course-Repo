#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double a;
    double b;
    double c;
    double x;
    cout << "Please type value a: ";
    cin >> a;
    cout << "Please type value b: ";
    cin >> b;
    cout << "Please type value c: ";
    cin >> c;
    if((b*b - 4*a*c) >= 0) //If discriminant is larger than or equal to 0
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "First root of the equation equals to " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "Second root of the equation equals to " << x << endl;
    }
    else
    {
        cout << "This equation has no solution. Please stop" << endl;
    }
 
    return 0;
}