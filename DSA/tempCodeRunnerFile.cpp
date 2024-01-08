int maxProfit(vector<int>& prices) {
        // take prices[i]
        // find the smallest number (< prices[i]) in front of prices[i]
        // make pair.
        vector<pair<int,int>> valid_pairs;
        int n = prices.size();
        for(int i = 0; i < n-1; i++) {
            int maximum = *max_element(prices.begin()+i+1, prices.end());
            //cout << maximum << " ";
            //cout << prices[i] << endl;
            if(prices[i] < maximum) {
                valid_pairs.push_back(make_pair(prices[i], maximum));
            } else {
                continue;
            }
        }
        n = valid_pairs.size();
        int profit = 0;
        for(int i = 0; i < n; i++) {
            if(valid_pairs[i].second - valid_pairs[i].first > profit) {
                profit = valid_pairs[i].second - valid_pairs[i].first;
            }
        }
        if(valid_pairs.empty()) {
            return 0;
        }
        return profit;
    }