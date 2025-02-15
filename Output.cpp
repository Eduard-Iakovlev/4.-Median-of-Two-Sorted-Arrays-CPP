#include "Output.h"
#include "Solution.h"
#include "CheckResult.h"
#include <iostream>

using namespace std;

Output::Output(int example, vector<int> nums1, vector<int> nums2, double expected) : 
	example(example), nums1(nums1), nums2(nums2), expected(expected) {}

void Output::print(){
	cout << "============ Тест " << example << " ============" << endl;
	cout << "Входные данные: " << endl;
	cout << "nums1 = ";
	printVector(nums1);
	cout << "nums2 = ";
	printVector(nums2);
	cout << "Ожидаемый результат: " << expected << endl;
	run();
	cout << "Полученный результат: " << result << endl;
	cout << "============ Проверка =============" << endl;
	CheckResult checkResult(result, expected);
	if (checkResult.check()) {
		cout << "Результат теста: Пройден" << endl;
	}
	else {
		cout << "Результат теста: Не пройден" << endl;
	}
	cout << "===================================\n" << endl;


}

void Output::printVector(vector<int>& nums){
	cout << "[ ";
	for (auto& num : nums) {
		cout << num;
		if (&num != &nums.back()) {
			cout << ", ";
		}
	}
	cout << " ]" << endl;
}

void Output::run(){
	Solution solution;
	result = solution.findMedianSortedArrays(nums1, nums2);
}

