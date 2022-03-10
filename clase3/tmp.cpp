#include<iostream>

using namespace std;


void f(int &T) {
        T = 2;
}

void g(int T) {
        T = 2;
}

int main() {
        int A;
        A = 0;
        g(A);
        cout << A << endl;
        f(A);
        cout << A << endl;
        return 0;
}
