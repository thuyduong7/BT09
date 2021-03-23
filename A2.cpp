#include <iostream>
using namespace std;

int main()
{
     int* p = new int;
     int* p2 = p;
     *p = 10;
     // Sau khi xoa p, p2 ko con vung bo nho de tro den
     delete p;
     *p2 = 100;
     cout << *p2;
     delete p2;
}
