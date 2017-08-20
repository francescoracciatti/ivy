/*
 * Identifiable.h
 *
 * author: francesco racciatti
 */

#ifndef IVY_CORE_API_CONTAINER_IDENTIFIABLE_H_
#define IVY_CORE_API_CONTAINER_IDENTIFIABLE_H_

namespace ivy {

/**
 * The class \a Identifiable provides the abstract base class template to build identifiable
 * objects, i.e. objects provided with an identifier.
 */
template<typename T>
class Identifiable {
public:
	/**
	 * Destructor.
	 */
	virtual ~Identifiable();

	/**
	 * Gets the identifier.
	 *
	 * @return
	 *  the identifier
	 */
	const T& getIdentifier() const;

protected:
	/**
	 * Constructor.
	 *
	 * @param[in] identifier
	 *  the identifier
	 */
	Identifiable(const T& identifier);

	/**
	 * Copy constructor.
	 *
	 * @param[in] other
	 *  the other object
	 */
	Identifiable(const Identifiable<T>& other);

private:
	/**
	 * Assignment operator, disabled.
	 */
	Identifiable<T>& operator=(const Identifiable<T> other) = delete;

protected:
	// The identifier
	const T IDENTIFIER;
};

} /* namespace ivy */

#include "../../../core/src/container/Identifiable.tpp"

#endif /* IVY_CORE_API_CONTAINER_IDENTIFIABLE_H_ */
