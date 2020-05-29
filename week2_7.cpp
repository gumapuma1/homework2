//Пользователь задаёт число Ч и Х. Посчитать y:
//y =1/2x+1/4x+1/6x+…+1/Чx

#include <iostream>
#include <fstream>

using namespace std;

void fileWrite(double x);

int main() {
    double x, y=0;
    int a;

    cout << "Enter x...";
    cin >> x;
    cout << "Enter final coefficient(integer, even)...";
    cin >> a;

    ofstream fout;
    fout.open("data.txt");
    fout.close();

    if(a%2) cout << "Error. Final coefficient is odd number" << endl;
    else {
        for(int i = 2; i <= a; i+=2) {
            y+=1.0/(i*x);
        }
        cout << "y = " << y << endl;
        fileWrite(y);
    }

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