//https://leetcode.com/problems/maximum-product-subarray/

#include <iostream>
#include <vector> 

using namespace std;
int maxProduct(vector<int>& nums) {
    int passo = 0;
    int maior = nums[0];
    if(nums.size() == 1)
        return nums[0];
    int minProv = nums[0], maxProv = nums[0];
    for(int i = 1; i < nums.size(); i++){
        int tmp1 = maxProv * nums[i];
        int tmp2 = minProv * nums[i];
        maxProv = max(nums[i], max(tmp1, tmp2));
        minProv = min(nums[i], min(tmp1, tmp2));
        maior = max(maior, maxProv);
    }
    
    return maior;
}

int main() {
    vector<int> nums;
    int in;
    while(1){
        cin >> in;
        if(in == 0)
            break;
        else 
            nums.push_back(in); 
    }
    int result = maxProduct(nums);
    cout <<"::" << result << "\n";
    return 0;
}