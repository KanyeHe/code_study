#include<iostream>
#include<iomanip>

using namespace std;

void test1() {
    double a = 15;
    double *b = &a;
    double *c = b;
    cout << b << endl;
    cout << *b << endl;
    cout << c << endl;
}
/**
 * 指针与一维数组
 * 
 */
void test2() {
    int a[] = {-1, 1, 2, 7, 4, 5, 6};
    cout << *a << endl;
    int *p = a;
    int *pp = a + 3;

    cout << p <<endl;
    cout << pp << endl;

    cout << *p <<endl;
    cout << *pp << endl;

    cout << pp - p << endl;

}

void test3() {
    const int M = 30, N = 20;
    int a[M], b[N], c[N];
    int m, n, mn = 0, *pa, *pb, *pc;
    cout << "the size of array a :" << endl;
    cin >> m;
    cout << "the size of array b :" << endl;
    cin >> n;

    for (pa = a; pa < a + m; pa++) {
        cin >> *pa;
    }
    for (pb = b; pb < b + n; pb++) {
        cin >> *pb;
    }
    int times = M > N ? M : N;
    cout << times << endl;
    for (pa = a, pc = c; pa < a + m; pa++) {
        for (pb = b; pb < b + n; pb++) {
            if (*pa == *pb) {
                *pc++ = *pa;
                mn++;
                break;
            }
        }
    }

    int i, *pi = c;
    for (i = 0; i < mn; i++) {
        cout <<setw(5) << *(pi + i);
    }
    cout << endl;
}

/**
 * 指针与二位数组
 * 
 */
void test4() {
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
    cout << "---------------------" << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cout << setw(5) << *(a[i] + j) ;
        }
        cout << endl;
    }
    cout << "---------------------" << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cout << setw(5) << *(*(a + i) + j) ;
        }
        cout << endl;
    }
    cout << "---------------------" << endl;

    int *pa;
    pa = a[0];
    cout << pa << endl;
    cout << *(pa + 1) << endl;
    cout << "---------------------" << endl;

    int (*p)[4] = a;
    cout << *(p + 0)[2] << endl;
    cout << *(p + 1)[1] << endl;
    cout << "---------------------" << endl;

    int (*pp)[4];
    pp = a;
    cout << *(pp + 1)[1] << endl;
    cout << *(pp + 2) << endl;
    cout << "---------------------" << endl;

    cout << *((*p) + 0) << endl;
    cout << *((*p) + 1) << endl;
    cout << *((*p) + 2) << endl;
    cout << *((*p) + 4) << endl;
    cout << "---------------------" << endl;

    p++;
    cout << *((*p) + 0) << endl;
    cout << *((*p) + 1) << endl;
    cout << *((*p) + 2) << endl;
    cout << *((*p) + 4) << endl;

}

void test5() {

}

int main() {
    //test1();  
    //test2();
    //test3();
    //test4();
    test5();
}

