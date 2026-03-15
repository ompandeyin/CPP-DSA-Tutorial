#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 == 0) n++;

    int half = n / 2;

    for(int i = 0; i <= half; i++) {
        for(int s = 0; s < half - i; s++) cout << " ";
        if(i == 0) cout << "*";
        else {
            cout << "*";
            for(int s = 0; s < 2*i - 1; s++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    for(int i = half - 1; i >= 0; i--) {
        for(int s = 0; s < half - i; s++) cout << " ";
        if(i == 0) cout << "*";
        else {
            cout << "*";
            for(int s = 0; s < 2*i - 1; s++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }
}
