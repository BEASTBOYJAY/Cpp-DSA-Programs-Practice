#include <iostream>
using namespace std;
#include <vector>

void best_time(vector<int> prices,int length)
{
    int mini=prices[0];
    int max_profit=0;
    int size=prices.size();

    for (int i=1;i<size;i++)
    {
        int cost=prices[i]-mini;
        max_profit= max(max_profit,cost);
        mini=min(mini,prices[i]);
    }
    cout<<max_profit;
    
}
int main()
{
    vector <int> prices={7,1,5,3,6,4};
    int length=prices.size();
    best_time(prices,length);
}