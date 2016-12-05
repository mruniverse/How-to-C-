#include <iostream>

using namespace std;

int main(){
    int x = 1,y = 2;
    int *xPtr,*yPtr;

    xPtr = &x;
    yPtr = &y;

    cout << "xPtr: " << xPtr << endl;
    cout << "yPtr: " << yPtr << endl;

    printf("\nX value: %d\nY value: %d\n\n",x,y);

    *xPtr = 20;
    *yPtr = 10;

    printf("Changing the value of *xPtr and *yPtr will change\n"
            "the value of x and y as well, because those pointers\n"
            "are pointing to the value of x and y\n");

    printf("\nX value: %d\nY value: %d\n\n",x,y);

    cout << "xPtr: " << xPtr << endl;
    cout << "yPtr: " << yPtr << endl;

    return 0;
}
