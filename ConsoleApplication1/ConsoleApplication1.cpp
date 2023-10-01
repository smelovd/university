#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;
/*
int main() //1
{
    
    int a, b, c;
    
    cin >> a >> b >> c;

    vector<int> vec = {a, b, c};
    sort(vec.begin(), vec.end());
    cout << vec[1];
    return 0;
}

int main()  //2
{

    double x;

    cin >> x;

    if (x >= -10 && x <= 0) {
        cout << cos(x) << endl;
    } 
    else if (x == 1 || x == 2 || x == 3) {
        cout << sin(x) + sin(pow(2 * x, 2)) << endl;
    } 
    else if (x >= 4 && x <= 10) {
        cout << sqrt(x - 3) << endl;
    }

    return 0;
}

int main() //3
{

    double x;

    cin >> x;

    if (x <= -2) {
        cout << x / 2 << endl;
    }
    else if (x > -2 && x <= 0) {
        cout << sin(3.14159265359 * x / 4) << endl;
    }
    else if (x > 0 && x <= 1) {
        cout << pow(x, 3) << endl;
    }
    else {
        cout << pow(x, -2) << endl;
    }

    return 0;

 }*/


string checkFunc(double x, double y) // 0;2 1;1 2;0 y = -x + 2 && y = -x + 1;   -2;0 -1;-1 0;-2   y = -x - 2;   y = x + 2; y = x - 2;
{
    if (y >= -x + 1 && y <= -x + 2) return "true";
    return "false";
}

int main()
{
    double x, y;
    cin >> x >> y;

    if (x < 0) x = -x; 
    if (y < 0) y = -y;

    cout << checkFunc(x, y) << endl;

    return 0;
}