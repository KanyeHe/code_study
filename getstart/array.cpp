#include<iostream>
#include<iomanip>

using namespace std;

 void test1() {
    // 数字初始化赋值

    int a[4] = {0, 1, 2, 3};

    // 此时只有 b[0] = 0, b[1] = 1, 后面的其他数据则默认被赋予0
    int b[4] = {0, 1};

    // 此时表示定义了一个长的 为4 的数组
    int c[] = {0, 1, 2, 3};
 }

 void test2() {
     int score[4][4] = {{89, 90, 98}, {81, 90, 99}, {98, 89, 92}, {90, 91, 85}};

     int i, j;
     for (i = 0; i < 4; i++) {
         score[i][3] = score[i][0] + score[i][1] + score[i][2];
        for (j = 0; j < 4; j++) {
            cout << setw(5) << score[i][j];
        }
        cout << endl;
     }
     int s[4];
     int x;
     for (x = 0; x < 4; x++) {
        s[x] = score[x][3];
     }

    int m, n;
     for (m = 1; m < 4; m++) {
        for (n = 0; n < 4 - m; n++) {
            if (s[n] < s[n + 1]) {
                int temp = s[n];
                s[n] = s[n + 1];
                s[n + 1] = temp;
            }
        }
     }
     
     for (x = 0; x < 4; x++) {
        cout << setw(5) << s[x];
     }
     cout << endl;
 }

int main() {
    test2();
 }

