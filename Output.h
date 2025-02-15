#pragma once
#include <vector>

using namespace std;

class Output {
public:
	Output() = default;
	Output(int example, vector<int> nums1, vector<int> nums2, double expected);
	void print();
	void printVector(vector<int>& nums);
	void run();
private:
	vector<int> nums1, nums2;
	double expected, result;
	int example;
};
