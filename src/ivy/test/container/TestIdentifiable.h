/*
 * Identifiable.h
 *
 * author: francesco racciatti
 */

#ifndef IVY_TEST_CONTAINER_TESTIDENTIFIABLE_H_
#define IVY_TEST_CONTAINER_TESTIDENTIFIABLE_H_

#include "/usr/local/Cellar/cxxtest/4.4/include/cxxtest/TestSuite.h"
#include <cstdint>
#include <climits>

#include "../../core/api/container/Identifiable.h"

/**
 * The class \a TestIdentifiable provides the tests for the class \a Identifiable.
 */
class TestIdentifiable : public CxxTest::TestSuite {
public:
	/**
	 * The class \a Mock provides a mock class to test the class \a Identifiable.
	 */
	template<typename T>
	class Mock : public ivy::Identifiable<T> {
	public:
		/**
		 * Constructor.
		 *
		 * @param[in] identifier
		 *  the identifier
		 */
		Mock(const T& identifier) : ivy::Identifiable<T>(identifier) {}

		/**
		 * Copy constructor.
		 *
		 * @param[in] other
		 *  the other object
		 */
		Mock(const Mock<T>& other) : ivy::Identifiable<T>(other) {}
	};

public:
	/**
	 * Tests the construction chain with 32 bit unsigned integers with the value 0.
	 */
    void testConstructionUnsignedInteger32BitZeroValue() {
    		const uint32_t identifier = 0;
    		Mock<uint32_t> mock(identifier);
    		TS_ASSERT_EQUALS(identifier, mock.getIdentifier());
    }

    /**
    	 * Tests the construction chain with 32 bit unsigned integers with the max value.
    	 */
	void testConstructionUnsignedInteger32BitMaxValue() {
		const uint32_t identifier = UINT_MAX;
		Mock<uint32_t> mock(identifier);
		TS_ASSERT_EQUALS(identifier, mock.getIdentifier());
	}

	/**
	 * Tests the construction chain by using the copy constructor.
	 */
	void testConstructionByCopy() {
		const uint32_t identifier = 0;
		Mock<uint32_t> mock(identifier);
		Mock<uint32_t> copy(mock);
		TS_ASSERT_EQUALS(mock.getIdentifier(), copy.getIdentifier());
	}
};

#endif /* IVY_TEST_CONTAINER_TESTIDENTIFIABLE_H_ */
