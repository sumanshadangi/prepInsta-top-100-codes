#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    vector<int> ans(n);
    int st = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            ans[i] = 1;
        }
        else
        {
            st = i + 1;
            while (st <= n - 1)
            {
                if (arr[i] < arr[st])
                {
                    ans[i] = st - i;
                    break;
                }
                else
                {
                    st++;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    return 0;
}
