/*
 * Groundwork calculation test utils
 * Author: Gleb Novodran <novodran@gmail.com>
 */
#include <groundwork.hpp>
#include "test.hpp"

static TEST_ENTRY s_tests[] = {
	TEST_DECL(test_quat),
	TEST_DECL(test_inner),
	TEST_DECL(test_mtx),
	TEST_DECL(test_xform)
};

int run_all_tests() {
	int nfailed = EXEC_TESTS(s_tests);
	return nfailed;
}