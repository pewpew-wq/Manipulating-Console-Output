#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string id1 = "00001";
    string id2 = "00002";
    string id3 = "00003";
    string name1 = "alice";
    string name2 = "bob";
    string name3 = "charlie";
    double balance1 = 1000.00;
    double balance2 = 530.25;
    double balance3 = 2040.50;

    cout << "\n"; 
    cout << setw(50) << setfill(' ') << left << "" << endl; 
    cout << left << "Daily Report" << endl; 
    cout << "\n"; 

    cout << setw(10) << left << "ID" << setw(15) << left << "Name" << setw(15) << left << "Balance" << endl;

    cout << setw(10) << setfill(' ') << left << id1 << setw(15) << left << name1 << setw(15) << fixed << setprecision(2) << setw(0) << "$" << balance1 << endl;
    cout << setw(10) << setfill(' ') << left << id2 << setw(15) << left << name2 << setw(15) << fixed << setprecision(2) << setw(0) << "$" << balance2 << endl;
    cout << setw(10) << setfill(' ') << left << id3 << setw(15) << left << name3 << setw(15) << fixed << setprecision(2) << setw(0) << "$" << balance3 << endl;

    return 0;
}