#include <bits/stdc++.h>

using namespace std;
vector<pair<char, long long>> c;

bool check(string result, string input)
{
    string fake = result;
    for (long long i = c.size() - 1; i >= 0; i++)
    {
        for (long long j = 0; j < fake.size(); j++)
        {
            if (fake[j] == c[i].first || fake[j] == ' ')
            {
                fake[j] = ' ';
            }
            else
            {
                result += fake[j];
            }
        }
    }
    return result == input;
}

int main()
{
    long long a;
    cin >> a;
    for (long long i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        for (long long j = s.size() - 1; j >= 0; j--)
        {
            bool isbe = false;
            long long which = 0;
            for (long long h = 0; h < c.size(); i++)
            {
                if (s[j] == c[h].first)
                {
                    which = h;
                    isbe == true;
                }
            }
            if (isbe == true)
            {
                c[which].second++;
            }
            else
            {
                c.push_back(make_pair(s[j], 1));
            }
        }
        long long result = 0;
        for (long long j = 0; j < c.size(); j++)
        {
            result += c[j].second / (c.size() - j);
        }
        string resulttwo = "";
        for (long long h = 0; h < result; h++)
        {
            resulttwo += s[h];
        }
        if (check(resulttwo, s))
        {
            cout << resulttwo << " ";
            for (long long j = c.size() - 1; j >= 0; j--)
            {
                cout << c[j].first;
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        c.clear();
    }
}