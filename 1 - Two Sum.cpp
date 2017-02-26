#include <unordered_map>

//IDEA:1) Create a new vector temp where temp[i] = target-nums[i]. O(n)
//     2) Create a hash table <num,index> using nums for constant access. O(n)
//     3) Loop through each temp number, search the hash table for for it. 
//        When found, return a vector (loop index, hash value). Average O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> myMap;
        vector<int> temp = nums;
        
        
        for(int i=0;i<nums.size();i++){
            temp[i]=target-temp[i];
        }
        
        for(int i=0;i<nums.size();i++){
            myMap[nums[i]]=i;
        }
        
        for(int i=0;i<temp.size();i++){
            if(myMap.find(temp[i])!=myMap.end()&&i!=myMap[temp[i]]){
                vector<int> ret;
                ret.push_back(i);
                ret.push_back(myMap[temp[i]]);
                return ret;
            }
        }
        
    }
};
