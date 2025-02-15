#include "Solution.h"
#include <algorithm> 
#include <iostream>

using namespace std;

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    vector<int> combined_vector = merge(nums1, nums2);
    sort(combined_vector); 
    int medium = combined_vector.size() / 2;
	if (combined_vector.size() == 1) return combined_vector[0];
    if (combined_vector.size() % 2 == 0) {
        return (combined_vector[medium - 1] + combined_vector[medium]) / 2.0;
    } else {
        return combined_vector[medium];
    }
}

vector<int> Solution::merge(vector<int>& nums1, vector<int>& nums2){
    vector<int> combined_vector = nums1;
    combined_vector.insert(combined_vector.end(), nums2.begin(), nums2.end());
    return combined_vector;
}

void Solution::sort(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
}
