/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

bool ok(string s, char ch)
{
    int cnt = 0;
    for(char c : s)
        cnt += (c == ch);

    return cnt == s.length();
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string s;

    sf(n);
    cin >> s;

    string temp = s;
    vector<int> vec;

    // try black
    for(i = 0; i < n - 1; i++)
    {
        if(s[i] == 'W')
        {
            s[i] = 'B';

            if(s[i + 1] == 'W')
                s[i + 1] = 'B';
            else
                s[i + 1] = 'W';

            vec.pb(i + 1);
        }
    }

    if(ok(s, 'B'))
    {
        pf(vec.size()), nl;
        for(int e : vec)
            pf(e), pfs(" ");

        return 0;
    }

    // try white
    s = temp;
    vec.clear();
    for(i = 0; i < n - 1; i++)
    {
        if(s[i] == 'B')
        {
            s[i] = 'W';

            if(s[i + 1] == 'W')
                s[i + 1] = 'B';
            else
                s[i + 1] = 'W';

            vec.pb(i + 1);
        }
    }

    if(ok(s, 'W'))
    {
        pf(vec.size()), nl;
        for(int e : vec)
            pf(e), pfs(" ");

        return 0;
    }

    pf(-1);

    return 0;
}
