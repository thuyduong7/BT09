#include <iostream>

using namespace std;

int getLength(const char a[])
{
    int i = 0;
    while (*(a+i) != '\0'){
        i++;
    }
    return i;
}

char* reverse(const char a[], const int l)
{
    char* b = new char[l];
    for (int i = 0; i < l; i++){
        *(b+i) = *(a+l-i-1);
    }
    return b;
}

char* delete_char(const char a[], const char c, const int l)
{
    char* b = new char[l];
    int j = 0;
    for (int i = 0; i < l; i++){
        if (*(a+i) != c){
            *(b+j) = *(a+i);
            j++;
        }
    }
    return b;
}

char* pad_right(const char a[], const int n, const int l)
{
    char* b;
    if (l >= n) b = new char[l];
    else b = new char[n];
    for (int i = 0; i < l; i++){
        *(b+i) = *(a+i);
    }
    if (l >= n) return b;
    for (int i = l; i < n; i++){
        *(b+i) = ' ';
    }
    b[n] = '\0';
    return b;
}

char* pad_left(const char a[], const int n, const int l)
{
    char* b;
    if (l >= n) b = new char[l];
    else b = new char[n];
    for (int i = n-l; i < n; i++){
        *(b+i) = *(a+i-n+l);
    }
    if (l >= n) return b;
    for (int i = 0; i < n-l; i++){
        *(b+i) = ' ';
    }
    b[n] = '\0';
    return b;
}

char* truncate(const char a[], const int n, const int l)
{
    char* b = new char[l];
    if (l <= n){
        for (int i = 0; i < l; i++){
            *(b+i) = *(a+i);
        }
    }
    else{
        for (int i = 0; i < n; i++){
            *(b+i) = *(a+i);
        }
    }
    return b;
}

char* trim_left(const char a[], const int l)
{
    char* b = new char[l];
    int j = 0;
    for (int i = 0; i < l; i++){
        if (a[i] != ' '){
            b[j++] = a[i];
        }
    }
    return b;
}

char* trim_right(const char a[], const int l)
{
    char* b  = new char[l];
    int j = 0;
    for (int i = 0; i < l; i++){
        if (a[i] != ' '){
            b[j++] = a[i];
        } else break;
    }
    b[j] = '\0';
    return b;
}

int main()
{
    char *a = new char [50];
    cin >> a;
    int l = getLength(a);
    char c;
    //cin >> c;
    int n;
    //cin >> n;
    //char* b = trim_right(a,l);
    //cout << b;
}

