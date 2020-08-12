#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< "Enter the first string:\n";  string a; getline(cin, a);
    cout<< "Enter the second string:\n"; string b; getline(cin, b);

    int f=0, ans=0; vector<int> pos;
    for(int i=0;i<a.size()-b.size()+1;i++)
    {
    int cnt=0;
        for(int j=0;j<b.size();j++)
        {
            if(a[i+j]==b[j]) cnt++;
        }
    if(cnt==b.size()) {f=1; pos.push_back(i+1);ans++;}

    }

    if(f) {cout<<"The pattern matches "<< ans <<" times"<<endl;
    cout<<"Pattern matches at position(s) ";
    for(int i: pos) cout<<i<<" ";}

    else cout<<"No"<<endl;
}
