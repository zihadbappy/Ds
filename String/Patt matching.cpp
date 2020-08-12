#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< "Enter an string:\n"; string a; getline(cin, a);
    cout<< "Enter the string you want to match:\n"; string b; getline(cin, b);

    string patToFind=b, patFound; int f=0;

    for(int i=0;i<a.size();i++)
    {
        if(patToFind[0]==a[i])
        {
            patFound.push_back(patToFind[0]);
            patToFind.erase(patToFind.begin());
            if(patFound==b){ f=1; break;}
        }
        else if(patFound== a.substr(i-patFound.size(), patFound.size()))
            continue;
        else
            {patToFind=b;
            patFound.clear();}
    }

    if(f==1) cout<< "Yes";
    else cout<< "No";
    
    
}