#include<iostream>
using namespace std;
int main()
{
    cout<< "Enter the first string:\n"; string a; getline(cin, a);
    cout<< "Enter the second string:\n"; string b; getline(cin, b);
    int aLen=0, bLen=0, f=0;
    for(int i=0;a[i]!='\0';i++) aLen++; 
    for(int i=0;b[i]!='\0';i++) bLen++; 
    
    if(aLen!=bLen) cout<< "Strings are not of same lenght"<<endl;
    else
    {   
        for(int i=0;i<aLen;i++)
            if(a[i]!=b[i]) { f=1; break;}
        
        if(f==0) cout<< "Strings are identical"<<endl;
        else cout<< "Strings are of same lenght but not same values"<<endl;
    }
}
