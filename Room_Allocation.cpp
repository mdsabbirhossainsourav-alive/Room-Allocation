#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        int a[n]; 
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int total_room = 0;
        for(int i=0; i<n; i++)
        {
            int room = (a[i] + 1) / 2; 
            total_room += room; 
        }
        cout << total_room << endl;
    }
    return 0;
}

