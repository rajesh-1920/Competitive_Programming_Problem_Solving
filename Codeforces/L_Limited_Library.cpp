#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()
using namespace std; 
#define int long long
#define debug(x) cout<<#x<<" = ";_print(x); cout<<endl; /// Debug function
template<class T> void _print(T x) { cout << x; }
template<class T> void _print(vector<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
template<class T> void _print(set<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
template<class T, class V> void _print(pair<T, V>x) { cout << "{" << x.first << "," << x.second << "} "; }
template<class T, class V> void _print(map<T, V>x) { cout << "[ ";for (auto i : x)_print(i);cout << "]"; }
template<class T> void _print(multiset<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }


signed main() {
   FAST_IO;
   // start
   int n,m,x,y;
   cin>>n>>m>>x>>y;
   int fl=0;
   if(x*n<m)
   {
       fl=1;
   }
   priority_queue<int> self,boi;
    while (n--)
    {
        int t;
        cin>>t;
        self.push(t);
    }
    while (m--)
    {
        int t;
        cin>>t;
        boi.push(t);
    }
    if(fl)
    {
        cout<<"impossible\n";
        return 0;
    }
    priority_queue<int> ans,temp;

    while(true)
    {
        if(boi.empty()||self.empty())
            break;
        int t = y;
        while (t--)
        {
            if(boi.empty())
            break;
            while (boi.top()>self.top())
            {
                temp.push(boi.top());
                boi.pop();
                if(boi.empty())
                    break;
            }
            if(boi.empty())
            break;
            boi.pop();
        }
        ans.push(self.top());
        self.pop();
    }
    while (!self.empty())
    {
        ans.push(self.top());
        self.pop();
    }
    while (!boi.empty())
    {
        temp.push(boi.top());
        boi.pop();
    }
    
    while (true)
    {
        if(temp.empty()||ans.empty())
        break;
        int t=x-y;
        //cout<<temp.size()<<'\n';
        while (t--)
        {
            if(temp.empty())
            break;
            if(temp.top()>ans.top())
            {
                cout<<"impossible\n";
                return 0;
            }
            temp.pop();
        }
        //cout<<ans.size()<<'\n';
        ans.pop();
    }
   cout<<ans.size()<<"\n";

   return 0;
}