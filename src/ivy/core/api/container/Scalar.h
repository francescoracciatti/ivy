/*
 * Scalar.h
 *
 * author: francesco racciatti
 */

#ifndef IVY_CORE_API_CONTAINER_SCALAR_H_
#define IVY_CORE_API_CONTAINER_SCALAR_H_

#include <type_traits>

#include "../../../core/api/container/Identifiable.h"

namespace ivy {

/**
 * The class \a Scalar provides scalar variables.
 */
template<typename TIdentifier, typename TValue, typename Enable = void>
class Scalar; // Primary template

// Specialization for non-floating-point types
template<typename TIdentifier, typename TValue>
class Scalar<TIdentifier, TValue,
			 typename std::enable_if<!std::is_floating_point<TValue>::value>::type> :
			 	 public Identifiable<TIdentifier> {
public:
	/**
	 * Constructor.
	 *
	 * @param[in] identifier
	 *  the identifier
	 *
	 * @param[in] value
	 *  the value
	 */
	Scalar(const TIdentifier& identifier, const TValue& value);

	/**
	 * TODO move the implementation in the .tpp
	 *
	 * Constructor.
	 *
	 * @param[in] other
	 *  the other object
	 */
	Scalar(const Scalar<TIdentifier, TValue>& other);

	/**
	 * Assignment operator.
	 *
	 * @param[in] rhs
	 *  the operand on the right-hand side
	 */
	Scalar<TIdentifier, TValue>& operator=(const Scalar<TIdentifier, TValue>& rhs);

	/**
	 * Assignment operator.
	 *
	 * @param[in] rhs
	 *  the operand on the right-hand side
	 */
	Scalar<TIdentifier, TValue>& operator=(const TValue& rhs);

	/**
	 * Gets the value.
	 *
	 * @return
	 *  the value
	 */
	const TValue& getValue() const;

	/**
	 * Sum operator, with a scalar.
	 *
	 * @param[in] addend
	 *  the other scalar addend
	 *
	 * @return
	 *  the scalar having as value the sum between the addends
	 */
	Scalar<TIdentifier, TValue> operator+(const Scalar<TIdentifier, TValue>& addend) const;

	/**
	 * Sum operator, with a value.
	 *
	 * @param[in] other
	 *  the other addend
	 *
	 * @return
	 *  the scalar having as value the sum between the addends
	 */
	Scalar<TIdentifier, TValue> operator+(const TValue& addend) const;

	/**
	 * Prefix increment.
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator++();

	/**
	 * Postfix increment.
	 *
	 * @return
	 *  the unmodified copy by value
	 */
	Scalar<TIdentifier, TValue> operator++(int);

	/**
	 * Subtraction operator.
	 *
	 * @param[in] subtrahend
	 * 	the scalar subtrahend
	 *
	 * @return
	 *  the scalar having as value the difference between the minuend and the subtrahend
	 */
	Scalar<TIdentifier, TValue> operator-(const Scalar<TIdentifier, TValue>& subtrahend) const;

	/**
	 * Subtraction operator.
	 *
	 * @param[in] subtrahend
	 * 	the subtrahend
	 *
	 * @return
	 *  the scalar having as value the difference between the minuend and the subtrahend
	 */
	Scalar<TIdentifier, TValue> operator-(const TValue& subtrahend) const;

	/**
	 * Prefix decrement.
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator--();

	/**
	 * Postfix decrement.
	 *
	 * @return
	 *  the unmodified copy by value
	 */
	Scalar<TIdentifier, TValue> operator--(int);

	/**
	 * Multiplication operand.
	 *
	 * @param[in] factor
	 *  the scalar factor
	 *
	 * @return
	 *  the scalar having as value the multiplication between the factors
	 */
	Scalar<TIdentifier, TValue> operator*(const Scalar<TIdentifier, TValue>& factor) const;

	/**
	 * Multiplication operand.
	 *
	 * @param[in] factor
	 *  the factor
	 *
	 * @return
	 *  the scalar having as value the multiplication between the factors
	 */
	Scalar<TIdentifier, TValue> operator*(const TValue& factor) const;

	/**
	 * Division operand.
	 *
	 * @param[in] divisor
	 *  the scalar divisor
	 *
	 * @return
	 *  the scalar having as value the division between the dividend and the divisor
	 */
	Scalar<TIdentifier, TValue> operator/(const Scalar<TIdentifier, TValue>& divisor) const;

	/**
	 * Division operand.
	 *
	 * @param[in] divisor
	 *  the divisor
	 *
	 * @return
	 *  the scalar having as value the division between the dividend and the divisor
	 */
	Scalar<TIdentifier, TValue> operator/(const TValue& divisor) const;

	/**
	 * Modulo operand.
	 *
	 * @param[in] divisor
	 *  the scalar divisor
	 *
	 * @return
	 *  the scalar having as value the modulo between the dividend and the divisor
	 */
	Scalar<TIdentifier, TValue> operator%(const Scalar<TIdentifier, TValue>& divisor) const;

	/**
	 * Modulo operand.
	 *
	 * @param[in] divisor
	 *  the divisor
	 *
	 * @return
	 *  the scalar having as value the modulo between the dividend and the divisor
	 */
	Scalar<TIdentifier, TValue> operator%(const TValue& divisor) const;

	/**
	 * Sum-assignment operand.
	 *
	 * @param[in] addend
	 *  the scalar addend
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator+=(const Scalar<TIdentifier, TValue>& addend);

	/**
	 * Sum-assignment operand.
	 *
	 * @param[in] addend
	 *  the addend
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator+=(const TValue& addend);

	/**
	 * Subtraction-assignment operand.
	 *
	 * @param[in] subtrahend
	 *  the scalar subtrahend
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator-=(const Scalar<TIdentifier, TValue>& subtrahend);

	/**
	 * Subtraction-assignment operand.
	 *
	 * @param[in] subtrahend
	 *  the subtrahend
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator-=(const TValue& subtrahend);

	/**
	 * Multiplication-assignment operand.
	 *
	 * @param[in] factor
	 *  the scalar factor
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator*=(const Scalar<TIdentifier, TValue>& factor);

	/**
	 * Multiplication-assignment operand.
	 *
	 * @param[in] factor
	 *  the factor
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator*=(const TValue& factor);

	/**
	 * Division-assignment operand.
	 *
	 * @param[in] divisor
	 *  the scalar divisor
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator/=(const Scalar<TIdentifier, TValue>& divisor);

	/**
	 * Division-assignment operand.
	 *
	 * @param[in] divisor
	 *  the divisor
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator/=(const TValue& divisor);

	/**
	 * Modulo-assignment operand.
	 *
	 * @param[in] divisor
	 *  the scalar divisor
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator%=(const Scalar<TIdentifier, TValue>& divisor);

	/**
	 * Modulo-assignment operand.
	 *
	 * @param[in] divisor
	 *  the divisor
	 *
	 * @return
	 *  the reference-to this object
	 */
	Scalar<TIdentifier, TValue>& operator%=(const TValue& divisor);

	/**
	 * Equal-to operand.
	 *
	 * @param[in] other
	 *  the other scalar
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator==(const Scalar<TIdentifier, TValue>& other) const;

	/**
	 * Equal-to operand.
	 *
	 * @param[in] other
	 *  the other scalar
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator==(const TValue& other) const;

	/**
	 * Not-equal-to operand.
	 *
	 * @param[in] other
	 *  the other scalar
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator!=(const Scalar<TIdentifier, TValue>& other) const;

	/**
	 * Not-equal-to operand.
	 *
	 * @param[in] other
	 *  the other value
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator!=(const TValue& other) const;

	/**
	 * Less-than operand.
	 *
	 * @param[in] other
	 *  the other scalar
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator<(const Scalar<TIdentifier, TValue>& other) const;

	/**
	 * Less-than operand.
	 *
	 * @param[in] other
	 *  the other value
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator<(const TValue& other) const;

	/**
	 * Greater-than operand.
	 *
	 * @param[in] other
	 *  the other scalar
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator>(const Scalar<TIdentifier, TValue>& other) const;

	/**
	 * Greater-than operand.
	 *
	 * @param[in] other
	 *  the other value
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator>(const TValue& other) const;

	/**
	 * Less-than-or-equal-to operand.
	 *
	 * @param[in] other
	 *  the other scalar
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator<=(const Scalar<TIdentifier, TValue>& other) const;

	/**
	 * Less-than-or-equal-to operand.
	 *
	 * @param[in] other
	 *  the other value
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator<=(const TValue& other) const;

	/**
	 * Greater-than-or-equal-to operand.
	 *
	 * @param[in] other
	 *  the other scalar
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator>=(const Scalar<TIdentifier, TValue>& other) const;

	/**
	 * Greater-than-or-equal-to operand.
	 *
	 * @param[in] other
	 *  the other value
	 *
	 * @return
	 *  the scalar having as value the result of the comparison
	 */
	Scalar<TIdentifier, bool> operator>=(const TValue& other) const;

	/**
	 * Logical AND operator.
	 *
	 * @param[in] other
	 *  the other scalar
	 *
	 * @return
	 *  the scalar having as value the result of the logical operation
	 */
	Scalar<TIdentifier, TValue> operator&&(const Scalar<TIdentifier, TValue>& other) const;

	/**
	 * Logical AND operator.
	 *
	 * @param[in] other
	 *  the other value
	 *
	 * @return
	 *  the scalar having as value the result of the logical operation
	 */
	Scalar<TIdentifier, TValue> operator&&(const TValue& other) const;

	/**
	 * Logical OR operator.
	 *
	 * @param[in] other
	 *  the other scalar
	 *
	 * @return
	 *  the scalar having as value the result of the logical operation
	 */
	Scalar<TIdentifier, TValue> operator||(const Scalar<TIdentifier, TValue>& other) const;

	/**
	 * Logical OR operator.
	 *
	 * @param[in] other
	 *  the other value
	 *
	 * @return
	 *  the scalar having as value the result of the logical operation
	 */
	Scalar<TIdentifier, TValue> operator||(const TValue& other) const;

	/**
	 * Logical NOT operator.
	 *
	 * @return
	 *  the scalar having as value the result of the logical operation
	 */
	Scalar<TIdentifier, TValue> operator!() const;

protected:
	// The value
	TValue value;
};

// TODO specialize the class \a Scalar for floating-point types

} /* namespace ivy */

#include "../../../core/src/container/Scalar.tpp"

#endif /* IVY_CORE_API_CONTAINER_SCALAR_H_ */
