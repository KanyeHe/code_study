#include<iostream>
using namespace std;

int main() {


    int a = 1, b = 2, c = 3, y;
    y = (a = a + 1, b = b + 2, c = c + 3);
    // 上述相当于
    // a = a + 1;
    // b = b + 2;
    // c = c + 3;
    // y = c;

    cout << y << endl;


    int x;
    
    // 整个逗号表达式的值式 90 ，但是 x 的值是 30 
    cout << (x = 5 * 6, x * 3) << endl; // ==> 90
    cout << "x = " << x << endl;  // ==> 30
 
    // 优先级 和 运算符  上 --> 下 优先级依次降低
    // sizeof(), 按位反， 逻辑非！， 正、负号 （运算规则：从右向左）
    // 算术 乘除，求余， * / %
    // 算术 加减  + —
    // 按位左移、右移  << >>
    // 关系 大于小于   > >= < <=
    // 关系等于 不等于 == !=
    // 按位与  
    // 按位异或
    // 按位或
    // 逻辑与 &&
    // 逻辑或  ||
    // 条件 ？:   
    // 赋值 = ， 复合运算    （运算规则：从右向左）
    // 逗号 ，

}