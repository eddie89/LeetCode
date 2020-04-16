class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product;
        product.push_back(1);
        for(int num : nums) {
            product.push_back(product.back() * num);
        }
        vector<int> suf_product(n + 1);
        suf_product[n] = 1;
        for(int i = n - 1; i >= 0; --i)  {
            suf_product[i] = suf_product[i + 1] * nums[i];
        }
        vector<int> answers(n);
        for(int i = 0; i < n; i++) {
            answers[i] = product[i] * suf_product[i + 1];
        }
        return answers;
    }
};