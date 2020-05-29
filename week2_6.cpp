//Пользователь задаёт число Ч и Х. Посчитать y:
//y =x+2x+3x+…+Чx

#include <iostream>
#include <fstream>

using namespace std;

void fileWrite(double x);

int main() {
    double x, y=0;
    int a;

    cout << "Enter x...";
    cin >> x;
    cout << "Enter final coefficient(integer)...";
    cin >> a;

    ofstream fout;
    fout.open("data.txt");
    fout.close();

    for(int i = 1; i <= a; i++) {
        y+=i*x;
    }

    cout << "y = " << y << endl;
    fileWrite(y);

    return 0;
}

void fileWrite(double x) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        fout << "y = " << x;
    }
}