#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float f = 123.123;
    float *fptr;

    *fptr = f;

    cout << *fptr << endl;


    return 0;
}
