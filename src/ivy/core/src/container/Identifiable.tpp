/*
 * Identifiable.tpp
 *
 * author: francesco racciatti
 */

namespace ivy {

template<typename T>
Identifiable<T>::~Identifiable() {}

template<typename T>
const T& Identifiable<T>::getIdentifier() const {
	return IDENTIFIER;
}

template<typename T>
Identifiable<T>::Identifiable(const T& identifier) :
		IDENTIFIER(identifier) {}

template<typename T>
Identifiable<T>::Identifiable(const Identifiable<T>& other) :
		IDENTIFIER(other.IDENTIFIER) {}

} /* namespace ivy */
