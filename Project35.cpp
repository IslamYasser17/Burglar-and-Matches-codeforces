#include <bits/stdc++.h>
using namespace std;
ofstream out("out.txt");
#define I_Y ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define F first
#define S second
typedef long long ll;
const int N = 1e6 + 1;
//int arr[N] = { 0 };
int main()
{
    I_Y
        vector<pair<int, int>>v;
    int n, wanted;
    cin >> wanted >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({ y,x });
    }
    sort(v.begin(), v.end());
    int ans = 0;
    auto iter = v.rbegin();
    while (wanted&&iter!=v.rend())
    {
        if (iter->second <= wanted)
        {
            ans += iter->second * iter->first;
            wanted -= iter->second;
        }
        else {
            ans += wanted * iter->first;
            wanted -= wanted;
        }
        iter++;
    }
    cout << ans;
        
}