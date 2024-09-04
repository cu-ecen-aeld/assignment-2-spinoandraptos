#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in Test_assignment_validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE the two strings are equal.  See
*       the [unity assertion reference](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityAssertionsReference.md)
*/
void test_validate_my_username()
{
     	/**
     	* Obtain the hard coded username from autotest-validate.c
     	**/
     	const char *github_username = my_username();
     	/**
     	* Obtain the test read username from conf/username.txt
     	**/
     	const char *test_github_username = malloc_username_from_conf_file();
     	/**
     	* Compare the 2 strings for differing chars
     	* Format: TEST_ASSERT_EQUAL_STRING_MESSAGE(expected, actual, message)
     	**/
	TEST_ASSERT_EQUAL_STRING_MESSAGE(github_username, test_github_username, "Unable to validate username! Mismatch detected.");	
}
