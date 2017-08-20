/*
 * Scalar.tpp
 *
 * author: francesco racciatti
 */

#include "../../api/symbol/Mangler.h"

namespace ivy {

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::Scalar(const TIdentifier& identifier, const TValue& value) :
	 	 Identifiable<TIdentifier>(identifier),
		 value(value) {}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::Scalar(const Scalar<TIdentifier, TValue>& other) :
	 	 Identifiable<TIdentifier>(other.IDENTIFIER),
		 value(other.value) {}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
const TValue& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::getValue() const {
	return value;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator=(const Scalar<TIdentifier, TValue>& rhs) {
	if (this != &rhs) {
		value = rhs.value;
	}
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator=(const TValue& rhs) {
	value = rhs;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator+(const Scalar<TIdentifier, TValue>& addend) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value + addend.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator+(const TValue& addend) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value + addend);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator++() {
	value++;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator++(int) {
	Scalar<TIdentifier, TValue> copy(*this);
	++(*this);
	return copy;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator-(const Scalar<TIdentifier, TValue>& subtrahend) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value - subtrahend.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator-(const TValue& subtrahend) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value - subtrahend);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator--() {
	value--;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator--(int) {
	Scalar<TIdentifier, TValue> copy(*this);
	--(*this);
	return copy;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator*(const Scalar<TIdentifier, TValue>& factor) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value * factor.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator*(const TValue& factor) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value * factor);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator/(const Scalar<TIdentifier, TValue>& divisor) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value / divisor.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator/(const TValue& divisor) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value / divisor);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator%(const Scalar<TIdentifier, TValue>& divisor) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value % divisor.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator%(const TValue& divisor) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value % divisor);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator+=(const Scalar<TIdentifier, TValue>& addend) {
	value += addend.value;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator+=(const TValue& addend) {
	value += addend;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator-=(const Scalar<TIdentifier, TValue>& subtrahend) {
	value -= subtrahend.value;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator-=(const TValue& subtrahend) {
	value -= subtrahend;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator*=(const Scalar<TIdentifier, TValue>& factor) {
	value *= factor.value;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator*=(const TValue& factor) {
	value *= factor;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator/=(const Scalar<TIdentifier, TValue>& divisor) {
	value /= divisor.value;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator/=(const TValue& divisor) {
	value /= divisor;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator%=(const Scalar<TIdentifier, TValue>& divisor) {
	value %= divisor.value;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue>& Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator%=(const TValue& divisor) {
	value %= divisor;
	return *this;
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator==(const Scalar<TIdentifier, TValue>& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value == other.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator==(const TValue& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value == other);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator!=(const Scalar<TIdentifier, TValue>& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value != other.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator!=(const TValue& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value != other);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator<(const Scalar<TIdentifier, TValue>& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value < other.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator<(const TValue& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value < other);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator>(const Scalar<TIdentifier, TValue>& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value > other.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator>(const TValue& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value > other);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator<=(const Scalar<TIdentifier, TValue>& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value <= other.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator<=(const TValue& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value <= other);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator>=(const Scalar<TIdentifier, TValue>& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value >= other.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, bool> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator>=(const TValue& other) const {
	return Scalar<TIdentifier, bool>(Mangler::reserved(), value >= other);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator&&(const Scalar<TIdentifier, TValue>& other) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value && other.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator&&(const TValue& other) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value && other);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator||(const Scalar<TIdentifier, TValue>& other) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value || other.value);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator||(const TValue& other) const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), value || other);
}

// Specialized for non-floating-point types
template<typename TIdentifier, typename TValue>
Scalar<TIdentifier, TValue> Scalar<TIdentifier, TValue, typename std::enable_if<!std::is_floating_point<TValue>::value>::type>
	::operator!() const {
	return Scalar<TIdentifier, TValue>(Mangler::reserved(), !value);
}

} /* namespace ivy */

