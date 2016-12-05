#include <iostream>

using namespace std;

int main(){
    int v[5];
    int *p[5];
    int c = 5;

    for(int j = 0; j < 5; j++){
        cin >> v[j];
    }

    for(int i = 0; i < 5; i++){
        p[i] = &v[c];
        c--;
    }

    for(int i = 0; i < 5; i++){
        cout << v[i] << endl;
    }

    return 0;
}
