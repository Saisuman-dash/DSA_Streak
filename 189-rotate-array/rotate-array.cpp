class Solution {
public:
void print(vector<int> &nums)
{
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i];
    }
    cout<<endl;
}
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       k =k%n;
    //    if(n<k)
    //    {
    //     return ;
    //    }
       reverse(nums.begin(),nums.end()-k);
       print(nums);
       reverse(nums.begin()+n-k,nums.end());
       print(nums);
       reverse(nums.begin(),nums.end());
    }
};