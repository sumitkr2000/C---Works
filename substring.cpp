#include <iostream>
#include<vector>
using namespace std;

void solve(vector<string> &ans, string str, string output, int i)
{

    // base case
    if (i >= str.length())
    {
        if (output.length() > 0)
            ans.push_back(output);
        return;
    }

    // exclude
    solve(ans, str, output, i + 1);

    // include
    output.push_back(str[i]);
    solve(ans, str, output, i + 1);
}

int main()
{

    string str;
    cin >> str;

    vector<string> ans;
    string output = "";

    solve(ans, str, output, 0);
     
    for(int i = 0; i<ans.size(); i++) {
        cout<<ans[i]<<endl;
    }
}