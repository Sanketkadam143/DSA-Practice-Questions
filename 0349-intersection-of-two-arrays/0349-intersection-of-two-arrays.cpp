class Solution
{
    public:
        vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> ans;
            int prev1 , prev2;
            sort(nums1.begin(), nums1.end());
            sort(nums2.begin(), nums2.end());
            for (int i = 0; i < nums1.size(); i++)
            {
                if (prev1 != nums1[i])
                {
                    prev1 = nums1[i];
                    for (int j = 0; j < nums2.size(); j++)
                    {
                        if (nums2[j] > nums1[i]) break;
                        if (nums2[j] == nums1[i] && prev2 != nums2[j])
                        {
                            ans.push_back(nums2[j]);
                            prev2 = nums2[j];
                        }
                    }
                }
            }
            return ans;
        }
};