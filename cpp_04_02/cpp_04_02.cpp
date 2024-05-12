#include <iostream>
#include "Contador.h"
using namespace std;

int main() {
    Contador A,B,C;
    A.Contar();
    B.Contar();
    C.Contar();
    B.Contar();

    cout << "[+C" << A.Numero_objeto() << "]" << "[C+" << B.Numero_objeto() << "]" << "[C+" << C.Numero_objeto() << "]";
    cout << "A: " << A.Obj() << ", G:" << A.Gen() << endl; 
    cout << "B: " << B.Obj() << ", G:" << B.Gen() << endl;
    cout << "C: " << C.Obj() << ", G:" << C.Gen() << endl;

    A.~Contador();
    B.~Contador();
    C.~Contador();

    cout << "[-C" << A.Numero_objeto() << "]" << "[-C" << B.Numero_objeto() << "]" << "[-C" << C.Numero_objeto() << "]";
    return 0; 
}