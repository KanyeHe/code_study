#include<iostream>
#include<iomanip>

using namespace std;

void test1() {
    int year;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << "年是闰年" << endl;
    } else {
        cout << year << "年不是闰年" << endl;
    }
}

void test2() {
    int radious;
    int i = 0;
    while(i < 3) {
        cin >> radious;
        if (radious > 0) {
            cout << radious * radious << endl;
            i++;
        }
        continue;
    }
}

void test3() {
    int x;
    cin >> x;
    while (x != 0) {
        cout << x % 10;
        x /= 10;
    }
}

void test4() {
    int fib1 = 0, fib2 = 1, fib3, n;
    cout << "Fibonacci数列前20项:" << endl;
    cout << setw(5) << 0 << setw(5) << 1;
    for (n = 3; n <= 20; n++) {
        fib3 = fib1 + fib2;
        cout << setw(5) << fib3;
        fib1 = fib2;
        fib2 = fib3;
        if (n % 5 == 0) {
            cout << endl;
        }
    }

}

int main() {
    test4();

}

