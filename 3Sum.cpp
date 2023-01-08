 bool _(int a, int b, int c)
    {
        return a + b + c == 0;
    }
   vector<vector < int>> threeSum(vector<int> &nums)
        {
            vector<vector < int>> ans;
            set<vector < int>> S;
            int n = nums.size();

            for (int i = 0; i < n; ++i)
            {
                for (int j = i + 1; j < n; ++j)
                {
                    for (int k = j + 1; k < n; ++k)
                    {
                        if (_(nums[i], nums[j], nums[k]))
                        {
                            vector<int> v(3);
                            v[0] = nums[i];
                            v[1] = nums[j];
                            v[2] = nums[k];
                            sort(v.begin(), v.end());
                            S.insert(v);
                        }
                    }
                }
            }

            for (auto v: S) ans.push_back(v);

            return ans;
        }
