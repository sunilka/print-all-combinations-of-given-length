#include<bits/stdc++.h>
using namespace std;

void cal(string c,string ans, int k)
{
    if(ans.length() == k)
    {
        cout<<ans<<endl;
        return;
    }

    else
    {
        for(int i=0;i<c.length();i++)
        {
            char tempc = c[i];
            ans+= tempc;
            cal(c,ans,k);
            ans.erase(ans.length()-1,1);
        }
    }
}

int main()
{
    string c;
    int k = 4;
    c+='a';
    c+='b';
    cal(c,"",k);
}
