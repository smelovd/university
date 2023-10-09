# university
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
/*




int main() { //1
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a == b || a == c || b == c) {
        cout << "At least one pair of numbers is equal." << endl;
    } else {
        cout << "There are no equal pairs of numbers." << endl;
    }

    return 0;
}

int main() { //2
    double a, b, c;

    cout << "Enter the width of the rectangle (a): ";
    cin >> a;
    cout << "Enter the height of the rectangle (b): ";
    cin >> b;
    cout << "Enter the side of the square (c): ";
    cin >> c;

    if (a <= c && b <= c) {
        cout << "The rectangle can fit inside the square." << endl;
    } else {
        cout << "The rectangle cannot fit inside the square." << endl;
    }

    return 0;
}

int main() {//3
    double x, y, z;

    cout << "Enter three distinct real numbers: ";
    cin >> x >> y >> z;

    if (x > y) {
        swap(x, y);
    }
    if (y > z) {
        swap(y, z);
    }
    if (x > y) {
        swap(x, y);
    }

    cout << "The numbers in increasing order are: " << x << " " << y << " " << z << endl;

    return 0;
}

int main() {//4
    int number;

    cout << "Enter a three-digit natural number: ";
    cin >> number;

    if (number >= 100 && number <= 999) {
        int digit1 = number % 10;        // Отримуємо одиниці
        int digit2 = (number / 10) % 10; // Отримуємо десятки
        int digit3 = number / 100;       // Отримуємо сотні

        if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) {
            cout << "There are equal digits in the number." << endl;
        } else {
            cout << "There are no equal digits in the number." << endl;
        }
    } else {
        cout << "Please enter a valid three-digit natural number." << endl;
    }

    return 0;
}

int main() {//5
    int number;

    cout << "Enter a two-digit number: ";
    cin >> number;

    if (number >= 10 && number <= 99) {
        int tens = number / 10;   // Десятки
        int ones = number % 10;   // Одиниці
        int sum_of_digits = tens + ones;

        int cube_of_sum = pow(sum_of_digits, 3);
        int square_of_number = pow(number, 2);

        if (cube_of_sum == square_of_number) {
            cout << "The square of the number is equal to the cube of the sum of its digits." << endl;
        } else {
            cout << "The square of the number is not equal to the cube of the sum of its digits." << endl;
        }
    } else {
        cout << "Please enter a valid two-digit number." << endl;
    }

    return 0;
}


int main() {//6
    int number;

    cout << "Enter a three-digit natural number: ";
    cin >> number;

    if (number >= 100 && number <= 999) {
        int hundreds = number / 100;         // Сотні
        int tens = (number / 10) % 10;       // Десятки
        int ones = number % 10;              // Одиниці

        set<int> unique_digits;  // Контейнер для зберігання унікальних цифр

        unique_digits.insert(hundreds);
        unique_digits.insert(tens);
        unique_digits.insert(ones);

        int different_digits = unique_digits.size();

        cout << "The number of different digits in the number is: " << different_digits << endl;
    } else {
        cout << "Please enter a valid three-digit natural number." << endl;
    }

    return 0;
}

int main() {//7
    int number;

    cout << "Enter a four-digit natural number: ";
    cin >> number;

    if (number >= 1000 && number <= 9999) {
        int thousands = number / 1000;       // Тисячи
        int hundreds = (number / 100) % 10;   // Сотні
        int tens = (number / 10) % 10;        // Десятки
        int ones = number % 10;               // Одиниці

        int sum_of_first_two = thousands + hundreds;
        int sum_of_last_two = tens + ones;

        if (sum_of_first_two == sum_of_last_two) {
            cout << "The sum of the first two digits is equal to the sum of the last two digits." << endl;
        } else {
            cout << "The sum of the first two digits is not equal to the sum of the last two digits." << endl;
        }
    } else {
        cout << "Please enter a valid four-digit natural number." << endl;
    }

    return 0;
}


int main() {//8
    double num1, num2, num3;

    cout << "Enter three different real numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 < num2 && num1 < num3) {
        cout << "The smallest number is: " << num1 << endl;
    } else if (num2 < num1 && num2 < num3) {
        cout << "The smallest number is: " << num2 << endl;
    } else {
        cout << "The smallest number is: " << num3 << endl;
    }

    return 0;
}

int main() {//9
    double a, b, c, d;

    cout << "Enter the dimensions of the first rectangle (a b): ";
    cin >> a >> b;

    cout << "Enter the dimensions of the second rectangle (c d): ";
    cin >> c >> d;

    if ((a < c && b < d) || (a < d && b < c)) {
        cout << "The first rectangle can be placed inside the second rectangle with parallel sides." << endl;
    } else {
        cout << "The first rectangle cannot be placed inside the second rectangle with parallel sides." << endl;
    }

    return 0;
}


int main() {//10
    double R1, H1, R2, H2;

    cout << "Enter the radius and height of the first cylinder (R1 H1): ";
    cin >> R1 >> H1;

    cout << "Enter the radius and height of the second cylinder (R2 H2): ";
    cin >> R2 >> H2;

    if (R1 <= R2 && H1 <= H2) {
        cout << "The first cylinder can be placed inside the second cylinder with parallel bases." << endl;
    } else {
        cout << "The first cylinder cannot be placed inside the second cylinder with parallel bases." << endl;
    }

    return 0;
}

int main() {//11
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

int main() {//12
    double num1, num2, num3;

    cout << "Enter three different real numbers: ";
    cin >> num1 >> num2 >> num3;

    if ((num1 < num2 && num2 < num3) || (num3 < num2 && num2 < num1)) {
        cout << "The number " << num2 << " is between " << num1 << " and " << num3 << endl;
    } else if ((num2 < num1 && num1 < num3) || (num3 < num1 && num1 < num2)) {
        cout << "The number " << num1 << " is between " << num2 << " and " << num3 << endl;
    } else {
        cout << "The number " << num3 << " is between " << num1 << " and " << num2 << endl;
    }

    return 0;
}

int main() {//13
    int n;

    cout << "Enter the number n: ";
    cin >> n;

    if (n == 1) {
        cout << "I am " << n << " year" << (n == 1 ? "" : "s") << endl;
    } else {
        cout << "I am " << n << " years" << endl;
    }

    return 0;
}

int main() {//14
    double x, y, z;

    cout << "Enter three different real numbers: ";
    cin >> x >> y >> z;

    if (x < y) {
        swap(x, y);
    }
    if (x < z) {
        swap(x, z);
    }
    if (y < z) {
        swap(y, z);
    }

    cout << "Numbers in descending order: " << x << ", " << y << ", " << z << endl;

    return 0;
}

int main() {//15
    double x, y, z;

    cout << "Enter three different real numbers: ";
    cin >> x >> y >> z;

    double max_number;

    // Порівнюємо числа, щоб знайти найбільше
    if (x >= y && x >= z) {
        max_number = x;
    } else if (y >= x && y >= z) {
        max_number = y;
    } else {
        max_number = z;
    }

    cout << "The largest number is: " << max_number << endl;

    return 0;
}











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
