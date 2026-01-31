#include<iostream>
#include<vector>
using namespace std;

int sec_largest(vector<int>& nums){

int max1=nums[0];
int max2=nums[0];
for(int i=1;i<nums.size();i++){
    if(nums[i]>max1){
        max2=max1;
        max1=nums[i];
    }
    else if (nums[i]>max2 && nums[i]!=max1){
        max2=nums[i];
    }
    
}
return max2;
}

int main() {

    vector<int> v ={15,20,-25,34,62,17,63};
    cout<<sec_largest(v)<<endl;
    
    return 0;
}
