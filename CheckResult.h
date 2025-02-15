#pragma once
class CheckResult{
public:
	CheckResult() = default;
	CheckResult(double result, double expected);
	bool check();
private:
	double result, expected;
};

