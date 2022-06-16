#include<bits/stdc++.h>
using namespace std;

void find_pattern(string txt,string patt)
{
    
    int ans = txt.find(patt);

    while(ans != string::npos)
    {
        cout<<"Pattern found at: "<<ans<<"\n";
        ans = txt.find(patt,ans+1);
    }

}

int main()
{
    string txt,patt;
    cin>>txt>>patt;

    find_pattern(txt,patt);
    return 0;

}