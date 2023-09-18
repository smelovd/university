#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


double PI = 3.14159265358979323846;

/*

int main()  // 1  a / 1000 і округлюється до нижнього значення (відкидуються дробові значення)
{
    int a;
    cin >> a;
    cout << a / 1000 << endl;
    return 0;
}



int main()  //   2
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << b + " " + a;
    return 0;
}



int main()  //   3
{
    int a, b, c , d;
    cin >> a >> b >> c >> d;
    cout << d << endl;
    cout << c << endl;
    cout << b << endl;
    cout << a << endl;
    return 0;
}



int main() {   //  4
    int dig1, dig2, dig3;

    cin >> dig1 >> dig2 >> dig3;
    if (dig1 > 9 || dig1 < 0 || dig2 > 9 || dig2 < 0 || dig3 > 9 || dig3 < 0) {
        cout << "there is not 0-9 value";
        return 0;
    } 
    cout << dig1 << dig2 << dig3;
    
    return 0;
}


int main() { //5
    int num1, num2, num3, num4, num5;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << num1 + num2 << endl;
    cout << num1 + num2 + num3 << endl;
    cout << num1 + num2 + num3 + num4 << endl;
    cout << num1 + num2 + num3 + num4 + num5 << endl;

    return 0;
}


int main() {   //6
    int num;

    cin >> num;

    if (num < 10000 || num > 99999) {

        cout << "enter a 5-digit number" << endl;
        return 0;
    }
    cout << num / 10 << endl;
    cout << num / 100 << endl;
    cout << num / 1000 << endl;
    cout << num / 10000 << endl;

    return 0;
}


int main() {   //7
    int dig1, dig2, dig3;

    cin >> dig1 >> dig2 >> dig3;

    if (dig1 < 1 || dig2 < 1 || dig3 < 1 || dig1 > 9 || dig2 > 9 || dig3 > 9) {
        cout << "Invalid input" << endl;
        return 0;
    }
    
    vector<int> digits = {dig1, dig2, dig3};
    sort(digits.begin(), digits.end());

    cout << digits[0] << digits[1] << digits[2] << endl;
    cout << digits[0] << digits[2] << digits[1] << endl;
    cout << digits[1] << digits[0] << digits[2] << endl;
    cout << digits[1] << digits[2] << digits[0] << endl;
    cout << digits[2] << digits[0] << digits[1] << endl;
    cout << digits[2] << digits[1] << digits[0] << endl;
    
    return 0;
}

int main() {   //8
    int num1, num2, num3, num4, num5;
    int sum = 0;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    vector<int> nums = {num1 , num2, num3, num4, num5};

    for (int num : nums) {
        if (num > 999999 || num < 100000) {
            cout << "invalid input";
            return 0;
        }
        num /= 1000;
        sum += num;
    }
    
    cout << sum;

    return 0;
}

int main()  // 9) сума цифр в числі
{
    int x, a, b, c, d, e, s;
    cin >> x;
    a = x / 10000 % 10;
    b = x / 1000 % 10;
    c = x / 100 % 10;
    d = x / 10 % 10;
    e = x / 1 % 10;

    s = a + b + c + d + e;
    cout << s;
    return 0;
}

int main()  // 10
{
    int x;
    cin >> x;
    if (x > 99 || x < 10) {
        cout << "2-digit number please";
        return 0;
    }

    cout << x % 10 << endl;
    cout << x / 10 << endl;
    return 0;
}

int main()  // 11
{
    int x;
    cin >> x;
    if (x > 9999 || x < 1000) {
        cout << "4-digit number please";
        return 0;
    }

    cout << x / 100 << " " << x % 100 << endl;
    return 0;
}

int main()  // 12
{
    int x;
    cin >> x;
    if (x > 99999 || x < 10000) {
        cout << "5-digit number please";
        return 0;
    }

    cout << x % 10 << x / 10 % 10 << x / 100 % 10 << x / 1000 % 10 << x / 10000 << endl;
    return 0;
}

int main()  // 13
{
    int x;
    cin >> x;

    if (x <= 0) {
        cout << "natural value please";
        return 0;
    }

    cout << pow(x, 2);

    return 0;
}

int main()  // 14
{
    int a, b, result;
    cin >> a >> b;
    
    result = pow((a + b), 2) + pow((a - b), 2) - (3 * a * b);
    cout << result;

    return 0;
}

int main()  // 15
{
    int a, b, result;
    cin >> a >> b;

    result = pow((pow(a, 2) - b), 2) - (4 * a * pow(b, 2)) + (4 * pow((pow(a, 3) - 5), 2));
    cout << result;

    return 0;
}

int main()  // 16
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << a + b << endl; // сума а, б
    cout << a + c << endl;// сума а, с
    cout << b + c << endl;// сума б, с
    cout << a + b + c << " " << a * b * c << endl; // сума а, б, с пробіл множення а, б , с
    return 0;
}

int main()  // 17
{
    int a, b, c, d, result1, result2, res3, res4, res5;
    cin >> a >> b >> c >> d;

    result1 = pow((a + b), 3);
    result2 = pow((c - d), 4);
    cout << result1 << " " << result2 << endl;

    res3 = pow((a + (2 * a * b) + b), 2);
    res4 = pow((c - (3 * c * pow(d, 2)) + 5), 2);
    res5 = 6 * pow((pow(b, 2) - (4 * a * c)), 2);;

    cout << res3 << " " << res4 << " " << res5 << endl;
    return 0;
}

int main()  // 18
{
    int a, b, c, d, result1, result2, res3, res4, res5;
    cin >> a >> b >> c >> d;

    result1 = pow((a + b), 3);
    result2 = pow((c - d), 4);
    cout << result1 << " " << result2 << endl;

    res3 = pow((a + (2 * a * b) + b), 2);
    res4 = pow((c - (3 * c * pow(d, 2)) + 5), 2);
    res5 = 6 * pow((pow(b, 2) - (4 * a * c)), 2);;

    cout << res3 << " " << res4 << " " << res5 << endl;
    return 0;
}

int main()  // 19.1
{
    double result, halfSum, a, b, c;
    cin >> a >> b >> c;

    halfSum = (a + b + c) / 2;
    result = sqrt(halfSum * (halfSum - a) * (halfSum - b) * (halfSum - c));

    cout << result << endl;
    return 0;
}

int main()  // 19.2
{
    double result, h, r;
    cout << "hight, radius" << endl;
    cin >> h >> r;
    result = (1.0 / 3.0) * PI * pow(r, 2) * h;

    cout << result << endl;
    return 0;
}

int main()  // 19.3
{
    double h, r, fullArea;
    cout << "fullArea, radius" << endl;
    cin >> fullArea >> r;


    h = (fullArea - (2 * PI * pow(r, 2))) / (2 * PI * r);

    cout << h << endl;
    return 0;
}*/

int main()  // 19.4
{
    double h, r, fullArea;
    cout << "fullArea, radius" << endl;
    cin >> fullArea >> r;


    h = (fullArea - (2 * PI * pow(r, 2))) / (2 * PI * r);

    cout << h << endl;
    return 0;
}