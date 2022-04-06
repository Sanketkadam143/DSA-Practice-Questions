#include <bits/stdc++.h>
using namespace std;

void subsequence(vector<int> input, int index = 0, vector<int> output = {})
{
    if (index == input.size())
    {
        for (auto it : output)
            cout << it << " ";
        if (output.size() == 0)
        {
            cout << "{}";
           
        }
         cout << endl;
            return;
    }
    // take or pick the particular index into the index_sequence

    subsequence(input, index + 1, output);
    output.push_back(input[index]);

    // not pick or not take condition,this element are not added to the sequence

    subsequence(input, index + 1, output);
}

int main()
{
    vector<int> a{3,1,2};
    subsequence(a);

    return 0;
}