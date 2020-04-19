#include <bits/stdc++.h>
using namespace std;
void reverse(string& s, string& rev, int l, int r)
{
    if(l == r)
    {
        rev.push_back(s[l]) ;
    }
    else
    {
        reverse(s, rev, l + 1, r);
        rev.push_back(s[l]);
    }
}

int main()
{
    string s, rev;
    getline(cin , s);
    cout <<" Original String is : " << s << endl;
    reverse(s, rev, 0, s.length() - 1);
    cout << "Reversed String is : " << rev << endl;
    return 0;
}