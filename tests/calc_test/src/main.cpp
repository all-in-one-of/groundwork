/*
 * Groundwork calculation test
 * Author: Gleb Novodran <novodran@gmail.com>
 */

#include <iostream>
#include <groundwork.hpp>

#include "test.hpp"

int main(int argc, char* argv[]) {
	using namespace std;
	int nfailed = run_all_tests();
	if (0 == nfailed) {
		cout << "\nTests passed" << endl;
	} else {
		cout << "\nTests failed" << endl;
	}
	return nfailed;
}
