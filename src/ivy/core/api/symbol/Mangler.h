/*
 * Mangler.h
 *
 * author: francesco racciatti
 */

#ifndef IVY_CORE_API_SYMBOL_MANGLER_H_
#define IVY_CORE_API_SYMBOL_MANGLER_H_

#include "../../../core/api/common/types.h"

namespace ivy {

/**
 * The class \a Mangler provides well-known values for the identifiers.
 */
class Mangler {
public:
	/**
	 * Gets the identifier for the variables defined automatically.
	 *
	 * @return
	 *  the identifier
	 */
	static const identifier_t& reserved();

public:
	/**
	 * Destructor.
	 */
	~Mangler();

private:
	/**
	 * Copy constructor, deleted.
	 *
	 * @warning
	 *  it disables also the default constructor.
	 */
	Mangler(const Mangler&) = delete;
};

} /* namespace ivy */

#endif /* IVY_CORE_API_SYMBOL_MANGLER_H_ */
