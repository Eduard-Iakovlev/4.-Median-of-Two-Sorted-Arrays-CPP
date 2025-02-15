#include <iostream>
#include <vector>
#include "Windows.h"
#include "Output.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

    int example = 0;
	double expected;
	vector<int> nums1, nums2;

	Output output;

	example++;
	nums1 = { 1, 3 };
	nums2 = { 2 };
	expected = 2.0;
	output = Output(example, nums1, nums2, expected);
	output.print();

	example++;
	nums1 = { 1, 2 };
	nums2 = { 3, 4 };
	expected = 2.5;
	output = Output(example, nums1, nums2, expected);
	output.print();

	example++;
	nums1 = { };
	nums2 = { 1 };
	expected = 1.0;
	output = Output(example, nums1, nums2, expected);
	output.print();

	example++;
	nums1 = { 1, 2, 3, 4, 5 };
	nums2 = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 };
	expected = 9.0;
	output = Output(example, nums1, nums2, expected);
	output.print();

}
