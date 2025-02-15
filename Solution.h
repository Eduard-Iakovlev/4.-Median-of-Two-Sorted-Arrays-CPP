#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
	vector<int> merge(vector<int>& nums1, vector<int>& nums2);
	void sort(vector<int>& nums);
};

