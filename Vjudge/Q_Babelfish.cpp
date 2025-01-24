#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr(80, 0);

    for(int i = 1; i<=75; i++){
        for(int j = i; j<=75; j+=i){
            arr[j]+=i;
        }
    }

    for(int i=1;i<75;i++){
        cout << i << " : " << arr[i]<<'\n';
    }

    return 0;
}