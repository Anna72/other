#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    set<unsigned long long> is;
    unsigned long long rez = 0;
    unsigned long long  a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        is.insert(a);
    }
    for (int i : is) {
    rez += i;
}
   // rez = accumulate(is.begin(), is.end(), 0);
    cout << rez;
}
