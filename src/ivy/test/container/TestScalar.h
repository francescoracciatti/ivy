/*
 * TestScalar.h
 *
 * author: francesco racciatti
 */

#ifndef IVY_TEST_CONTAINER_TESTSCALAR_H_
#define IVY_TEST_CONTAINER_TESTSCALAR_H_

#include "/usr/local/Cellar/cxxtest/4.4/include/cxxtest/TestSuite.h"
#include "../../core/api/container/Scalar.h"
#include "../../core/api/symbol/Mangler.h"

/**
 * The class \a TestScalar provides the tests for the class \a Scalar.
 *
 * TODO add tests for:
 *  * bool
 *  * string
 *  * double
 */
class TestScalar : public CxxTest::TestSuite {
public:
	/**
	 * Sets up the test.
	 */
	void setUp() {}

	/**
	 * Tears down the test.
	 */
	void tearDown() {}


#if 0
	/**
	 * Tests the construction chain for integers.
	 */
	void testConstructionIntegerValue() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const int VALUE = 42;
		ivy::Scalar<ivy::identifier_t, int> scalar(IDENTIFIER1, VALUE);
		TS_ASSERT_EQUALS(IDENTIFIER1, scalar.getIdentifier());
		TS_ASSERT_EQUALS(VALUE, scalar.getValue());
	}

	/**
	 * Tests the construction chain by copy for integers.
	 */
	void testConstructionByCopyIntegerValue() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const int VALUE = 42;
		ivy::Scalar<ivy::identifier_t, int> scalar(IDENTIFIER1, VALUE);
		ivy::Scalar<ivy::identifier_t, int> copy(scalar);
		TS_ASSERT_EQUALS(scalar.getIdentifier(), copy.getIdentifier());
		TS_ASSERT_EQUALS(scalar.getValue(), copy.getValue());
	}

	/**
	 * Tests the assignment operator by using an integer scalar.
	 */
	void testAssignmentOperatorWithIntegerScalar() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const ivy::identifier_t IDENTIFIER2 = 1;
		const int VALUE1 = 42;
		const int VALUE2 = 0;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER1, VALUE1);
		ivy::Scalar<ivy::identifier_t, int> scalar2(IDENTIFIER2, VALUE2);
		scalar1 = scalar2;
		TS_ASSERT_EQUALS(scalar1.getIdentifier(), IDENTIFIER1);
		TS_ASSERT_EQUALS(scalar1.getValue(), scalar2.getValue());
	}

	/**
	 * Tests the assignment operator by using an integer value.
	 */
	void testAssignmentOperatorWithIntegerValue() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const int VALUE1 = 42;
		const int VALUE2 = 0;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER1, VALUE1);
		scalar1 = VALUE2;
		TS_ASSERT_EQUALS(scalar1.getIdentifier(), IDENTIFIER1);
		TS_ASSERT_EQUALS(scalar1.getValue(), scalar1.getValue());
	}

	/**
	 * Tests the sum operator by using an integer scalar.
	 */
	void testSumOperatorWithIntegerScalar() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const ivy::identifier_t IDENTIFIER2 = 1;
		const int VALUE1 = 41;
		const int VALUE2 = 1;
		const int SUM = VALUE1 + VALUE2;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER1, VALUE1);
		ivy::Scalar<ivy::identifier_t, int> scalar2(IDENTIFIER2, VALUE2);
		ivy::Scalar<ivy::identifier_t, int> scalar3(scalar1 + scalar2);
		TS_ASSERT_EQUALS(scalar3.getIdentifier(), ivy::Mangler::reserved());
		TS_ASSERT_EQUALS(scalar3.getValue(), SUM);
	}

	/**
	 * Tests the sum operator by using an integer value.
	 */
	void testSumOperatorWithIntegerValue() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const int VALUE1 = 41;
		const int VALUE2 = 1;
		const int SUM = VALUE1 + VALUE2;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER1, VALUE1);
		ivy::Scalar<ivy::identifier_t, int> scalar2(scalar1 + VALUE2);
		TS_ASSERT_EQUALS(scalar2.getIdentifier(), ivy::Mangler::reserved());
		TS_ASSERT_EQUALS(scalar2.getValue(), SUM);
	}

	/**
	 * Tests the prefix increment operator on an integer scalar.
	 */
	void testPrefixIncOperatorWithOnIntegerScalar() {
		const ivy::identifier_t IDENTIFIER = 0;
		const int VALUE = 41;
		const int TEST = VALUE + 1;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER, VALUE);
		// Tests the invariance of the identifier
		TS_ASSERT_EQUALS((++scalar1).getIdentifier(), IDENTIFIER);
		// Tests the prefix increment
		ivy::Scalar<ivy::identifier_t, int> scalar2(IDENTIFIER, VALUE);
		TS_ASSERT_EQUALS((++scalar2).getValue(), TEST);
	}

	/**
	 * Tests the postfix increment operator on an integer scalar.
	 */
	void testPostfixIncOperatorWithOnIntegerScalar() {
		const ivy::identifier_t IDENTIFIER = 0;
		const int VALUE = 41;
		const int TEST = VALUE + 1;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER, VALUE);
		// Tests the invariance of the identifier
		TS_ASSERT_EQUALS((scalar1++).getIdentifier(), IDENTIFIER);
		// Tests the prefix increment
		ivy::Scalar<ivy::identifier_t, int> scalar2(IDENTIFIER, VALUE);
		TS_ASSERT_EQUALS((scalar2++).getValue(), VALUE);
		TS_ASSERT_EQUALS(scalar2.getValue(), TEST);
	}

	/**
	 * Tests the subtraction operator with integer scalars.
	 */
	void testSubtractionOperatorWithIntegerScalars() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const int VALUE1 = 43;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER1, VALUE1);

		const ivy::identifier_t IDENTIFIER2 = 1;
		const int VALUE2 = 1;
		ivy::Scalar<ivy::identifier_t, int> scalar2(IDENTIFIER2, VALUE2);

		const int VALUE3 = VALUE1 - VALUE2;
		ivy::Scalar<ivy::identifier_t, int> scalar3(scalar1 - scalar2);
		TS_ASSERT_EQUALS(scalar3.getIdentifier(), ivy::Mangler::reserved());
		TS_ASSERT_EQUALS(scalar3.getValue(), VALUE3);
	}

	/**
	 * Tests the subtraction operator with integer value.
	 */
	void testSubtractionOperatorWithIntegerValues() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const int VALUE1 = 43;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER1, VALUE1);

		const int VALUE2 = 1;

		const int VALUE3 = VALUE1 - VALUE2;
		ivy::Scalar<ivy::identifier_t, int> scalar3(scalar1 - VALUE2);
		TS_ASSERT_EQUALS(scalar3.getIdentifier(), ivy::Mangler::reserved());
		TS_ASSERT_EQUALS(scalar3.getValue(), VALUE3);
	}

	/**
	 * Tests the decrement operator with integer scalar.
	 */
	void testDecrementOperatorWithIntegerScalar() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const int VALUE1 = 43;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER1, VALUE1);

		const ivy::identifier_t IDENTIFIER2 = 1;
		const int VALUE2 = 1;
		ivy::Scalar<ivy::identifier_t, int> scalar2(IDENTIFIER2, VALUE2);


		const int VALUE3 = VALUE1 - VALUE2;
		ivy::Scalar<ivy::identifier_t, int> scalar3(scalar1 - VALUE2);
		TS_ASSERT_EQUALS(scalar3.getIdentifier(), ivy::Mangler::reserved());
		TS_ASSERT_EQUALS(scalar3.getValue(), VALUE3);
	}


	/**
	 * Tests the decrement operator with integer value.
	 */
	void testDecrementOperatorWithIntegerValue() {
		const ivy::identifier_t IDENTIFIER1 = 0;
		const int VALUE1 = 43;
		ivy::Scalar<ivy::identifier_t, int> scalar1(IDENTIFIER1, VALUE1);

		const int VALUE2 = 1;

		const int VALUE3 = VALUE1 - VALUE2;
		ivy::Scalar<ivy::identifier_t, int> scalar3(scalar1 - VALUE2);
		TS_ASSERT_EQUALS(scalar3.getIdentifier(), ivy::Mangler::reserved());
		TS_ASSERT_EQUALS(scalar3.getValue(), VALUE3);
	}

	// TODO add tests for decrement

	// TODO add tests for multiplication

	// TODO add tests for division

	// TODO add tests for modulo

	// TODO add tests for comparison operators

	// TODO add tests for logical operators


	// -------------------------------- FLOATING-POINT --------------------------------
#endif
};

#endif /* IVY_TEST_CONTAINER_TESTSCALAR_H_ */
