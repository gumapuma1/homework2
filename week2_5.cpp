//Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. 
//Например, если Н 10, М 35, Ш 5, то вывод должен быть таким: 10 15 20 25 30 35. 
//Значения Н, М, Ш указываются пользователем (считываются с клавиатуры).


#include <iostream>
#include <fstream>

using namespace std;

void fileWrite(int x);

int main() {
    int n, m, tab;

    cout << "Enter from... ";
    cin >> n;
    cout << "Enter until.. ";
    cin >> m;
    cout << "Enter step... ";
    cin >> tab;

    if(n<=0){
       cout << "Invalid input. n <= 0." << endl;
    }
    else { 
        cout << n << " ";
        for(;n<=m;) {
            n+=tab;
            if(n>m) break;
            cout << n << " ";
            fileWrite(n);
        }
    }

    cout << endl;

    return 0;
}

void fileWrite(int x) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        fout << x << " ";
    }
}