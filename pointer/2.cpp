#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    char texto[30] = "C eh legal";
    char *p = texto;

    while(*p != '\0'){
        cout << *p << endl;
        p+=2;
    }

    return 0;
}
