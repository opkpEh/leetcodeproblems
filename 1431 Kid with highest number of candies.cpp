class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> ans = {};

        vector<int> Scandies = candies;
        sort(Scandies.begin(), Scandies.end());

        for(auto candy: candies)
        {
            if(candy+extraCandies>= Scandies.back())
            {
                ans.push_back(true);
            }

            else
            {
                ans.push_back(false);
            }
        }

        return ans;
    }
};
