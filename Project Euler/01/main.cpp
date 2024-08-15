#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> nums;
    int n;
    int sum  = {0};
    cin >> n;
    for(int i=0; i < n; i++)
    {
        if(i%3 == 0 || i%5 == 0)
        {
            nums.push_back(i);
            sum += i;
        }
    }
    for( auto i : nums)
    {
        cout << i << " ";
    }
    cout <<endl <<  sum;
}