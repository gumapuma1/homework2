//Протабулировать функцию (шаг и диапазон задаёт пользователь):
//y = -0.23x2 + x


#include <iostream>
#include <fstream>

using namespace std;

void fileWrite(double y, double x);

int main() {
    double y, x, tab, rng;

    cout << "Enter step" << endl;
    cin >> tab;
    cout << "Enter range" << endl;
    cin >> rng;

    ofstream fout;
    fout.open("data.txt");
    fout.close();

    for(x = 0; x <= rng; x += tab) {
        y = -0.23 * x * x + x;
        cout << "|x = " << x << "  |  "
             << "y = " << y << "|" << endl;
            fileWrite(y, x);
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