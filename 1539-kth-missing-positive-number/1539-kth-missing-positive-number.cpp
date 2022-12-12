class Solution
{
    public:
        int findKthPositive(vector<int> &arr, int k)
        {
            int last = arr.size() + k, ind = 0,ans=0,counter=0;
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
                        ans=i;  
                        counter++;
                    }
                }
                else
                {
                   ans=i;
                   counter++;
                }
                if(counter==k)return ans;
            }
            return ans;
        }
};