#include<bits/stdc++.h>
using namespace std;


int main() {
    string a;
    cin >> a;
    int rez = 0;
    int prev = 0;
    int prevd = 0;
    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        if (isdigit(ch) == 0){
            if (prev == 1) rez++;
            else
            {
                rez += prevd;
                prevd = 0;
                prev = 1;
            }
        }
        else {
                prev = 0;
                char temp = a[i];
                int ia = temp - '0';
                prevd = prevd*10 + ia;

        }

    }
     if (prev == 1) rez++;
     if (prevd > 0) rez+= prevd;
    cout << rez;
}
