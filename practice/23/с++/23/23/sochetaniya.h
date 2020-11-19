#ifndef sal
#define sal
#include "factorial.h"
int comb(int k, int n) {
	return factor(n) / factor(k) / factor(n - k);
}
#endif#pragma once
