class Solution
{
    public:
        int findKthPositive(vector<int> &arr, int k)
        {
            vector<int> missing;
            int last = arr.size() + k, ind = 0;
            for (int i = 1; i <= last; i++)
            {
                if (i <= arr[arr.size()-1])
                {
                    if (arr[ind] == i)
                    {
                        ind++;
                    }
                    else
                    {
                        missing.push_back(i);                      
                    }
                }
                else
                {
                    missing.push_back(i);
                }
                if(missing.size()==k)return missing[k-1];
            }
            return missing[k-1];
        }
};