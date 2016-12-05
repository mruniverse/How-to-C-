#include <iostream>

using namespace std;

int main(){
    int a = 5, b = 12;
    int *p, *q;

    p = &a;
    q = &b;

    int c = *p + *q;

    cout << c << endl;


    return 0;
}
