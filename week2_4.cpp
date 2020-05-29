//Дана функция y=f(x). Найти значение функции по x:
//y = 2x - 10, если x > 0
//y = 0, если x = 0
//y = 2 * |x| - 1, если x < 0

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

void fileWrite(double y, double x);

int main() {
    double x, y;

    cout << "Enter x: ";
    cin >> x;

    ofstream fout;
    fout.open("data.txt");
    fout.close();

    if(x>0){
        y=2*x - 10;
        cout << "y = " << y << endl;
        fileWrite(y,x);
    }
    else {
        if(!x) {
            y=0;
            cout << "y = 0" << endl;
            fileWrite(y,x);
        }   
        else {
            y=2 * abs(x) - 1;
            cout << "y = " << y << endl;
            fileWrite(y,x);
        }
    }

    return 0;
}

void fileWrite(double y, double x) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        fout << "|x = " << x << "  |  "
             << "y = " << y << "|" << endl;
    }
}