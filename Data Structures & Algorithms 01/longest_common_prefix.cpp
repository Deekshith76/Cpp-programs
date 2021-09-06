#include <iostream>
#include <vector>

using namespace std;


string longestCommonPrefix(vector<string> & strs)
{
    int n = INT_MAX;
    for(int i=0; i<strs.size(); ++i)
    {
        if(strs[i] == "") return "";
        int k = strs[i].size();
        n = min(n, k);
    }

    for(int i=1; i<strs.size(); ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(strs[0][j] != strs[i][j])
            {
                n = min(n, j);
                break;
            }
        }
    }
    return strs[0].substr(0, n);
}

int main(void)
{
    vector<string> strs{"flower","flow","flight"};
    cout << longestCommonPrefix(strs) << "\n";


    vector<string> strs2{"dog","racecar","car"};
    cout << longestCommonPrefix(strs2) << "\n";
}