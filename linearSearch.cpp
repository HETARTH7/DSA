#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> v, int x)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            return i;
        }    
    }
    return -1;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int x = 5;
    int ans=linearSearch(v, x);
    if(ans==-1){
        cout<<"Not found";
    } else{
        cout<<x<<" found at index: "<<ans;
    }
}