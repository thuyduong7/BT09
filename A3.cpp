#include <iostream>
using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    // Lệnh delete c là không xác định vì c không trỏ tới một new array nào đó -> undefined behaviour
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

}
