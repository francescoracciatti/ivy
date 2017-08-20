/*
 * Mangler.cpp
 *
 * author: francesco racciatti
 */

#include "../../../core/api/symbol/Mangler.h"

#include <limits>

namespace ivy {

const identifier_t& Mangler::reserved() {
	static const identifier_t RESERVED = std::numeric_limits<identifier_t>::max();
	return RESERVED;
}

Mangler::~Mangler() {}

} /* namespace ivy */
