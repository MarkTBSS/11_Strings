#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "abcd";
    string b = "ef";
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    /* char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << endl; */

    swap(a[0], b[0]);
    cout << a << " " << b << endl;

    return 0;
}