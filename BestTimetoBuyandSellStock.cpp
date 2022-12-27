// Memory Limit Exceeded 
int maxProfit(vector<int>& prices) {
    int res = 0;
    int min = prices[0];
    int res1;
    vector<int>a;
    
    for(int i =0; i < prices.size(); i++)
    {
        if(min >= prices[i])
        {
            min = prices[i];
            int max = min;
            for(int j =i; j < prices.size(); j++)
            {
              if(max < prices[j])
                 max = prices[j];
                  a.push_back((max -min));
            }
         }
    }
    a.push_back(0);
    sort(a.begin(), a.end(), greater<>());
    return a.front();
    }
