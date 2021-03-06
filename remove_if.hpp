#pragma once

#include <algorithm>
#include "fwd.hpp"

namespace putils {
    // Remove items fitting a condition
    template<typename Container, typename Predicate>
    void remove_if(Container & container, Predicate && pred) {
        const auto it = std::remove_if(container.begin(), container.end(), FWD(pred));
        container.erase(it, container.end());
    }
}
