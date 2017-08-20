/*
 * TestMangler.h
 *
 * author: francesco racciatti
 */

#ifndef IVY_TEST_SYMBOL_TESTMANGLER_H_
#define IVY_TEST_SYMBOL_TESTMANGLER_H_

#include <cstdint>
#include <limits>

#include "/usr/local/Cellar/cxxtest/4.4/include/cxxtest/TestSuite.h"
#include "../../core/api/symbol/Mangler.h"

/**
 * The class \a TestMangler provides the tests for the class \a Mangler.
 */
class TestMangler : public CxxTest::TestSuite {
public:
	/**
	 * Tests the value of the reserved identifier.
	 */
	void testReservedIdentifier() {
		TS_ASSERT_EQUALS(ivy::Mangler::reserved(), std::numeric_limits<uint32_t>::max());
	}
};

#endif /* IVY_TEST_SYMBOL_TESTMANGLER_H_ */
