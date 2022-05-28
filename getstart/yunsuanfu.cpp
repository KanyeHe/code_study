#include<iostream>
using namespace std;

const float PI = 3.1416;

int main() {
    
    int iType;
    float radius, a, b, area;

    cout << "图形的类型是? 1:圆形; 2:长方形; 3:正方形";
    cin >> iType;

    cout << iType;

    switch(iType) {
        case 1:
            cout << "请输入圆形半径: ";
            cin >> radius;
            area = radius * radius * PI;
            cout << "圆的面积为: " << area << endl;
            break;
        case 2:
            cout << "请输入长方形的长: ";
            cin >> a;
            cout << "请输入长方形的宽: ";
            cin >> b;
            area = a * b;
            cout << "长方形的面积为: " << area << endl;
            break;
        case 3:
            cout << "请输入正方形边长: ";
            cin >> a;
            b = a;
            area = a * b;
            cout << "正方形的面积为: " << area << endl;
            break;
        default:
            cout << "非法的输入" << endl;
    }
}