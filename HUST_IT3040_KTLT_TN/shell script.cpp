#include <iostream>
using namespace std;

int main() {
    for (int iTest = 1; iTest <= 10; iTest++) {
        char tmp[10];
        sprintf(tmp, "%d", iTest);
        string seed(tmp);
        system((string("D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT_TN//gentest.exe ") + seed).c_str());
        system(string("D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT_TN//5.04_sol1.exe").c_str());
        system(string("D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT_TN//5.04_sol2.exe").c_str());
        if (system(string("fc sol1.out sol2.out").c_str()) != 0) {
            cout << "Test " << iTest << ": WRONG!//n";
            //return 0;
        }
        else
            cout << "Test " << iTest << ": CORRECT!//n";
    }
}