#include "CheckResult.h"

CheckResult::CheckResult(double result, double expected) : result(result), expected(expected){}

bool CheckResult::check(){
	return result == expected;
}
