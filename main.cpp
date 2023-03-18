//C++
#include <bits/stdc++.h>
using namespace std;

void bt(int k, string& X, string& s, int n, vector<int>& fr)
{
    if (k == n)
    {
        cout << X << endl;
        return;
    }
    for (int x = 0; x < 26; x++)
    {
        if (fr[x] > 0){
            fr[x]--;
            X[k] = x + 'a';
            bt(k + 1, X, s, n, fr);
            fr[x]++;
        }
    }
}

int main()
{
    string s;
    int k;
    cin >> s >> k;
    int n = s.length();

    vector<int> fr(26);
    for(char c : s)
        fr[c - 'a']++;

    string X(n, 'a');
    bt(0, X, s, n, fr);
    return 0;
}
