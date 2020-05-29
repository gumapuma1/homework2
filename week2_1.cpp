//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке равно номеру строки. 
//Количество строк Н вводит пользователь (можно из файла).

#include <iostream>
#include <fstream>

using namespace std;

void fileWrite();

int main() {
    int n;

    cout << "Enter the number of lines." << endl;
    cin >> n;

    for(int i=1; i <= n; i++) {
        for(int j=0; j < i; j++) {
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}

void fileWrite() {
    ofstream fout;
    fout.open("data.txt");

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        fout << "Done!";
    }
}