#pragma once

#include <cstddef>

namespace xindex::_ {
/**
 * XIndex uses arena allocation. Therefore, the amount of bytes allocated
 * differs from the amount of memory actually in use. Since arena alloc
 * provides performance improvements, it would be unfair however to just
 * count the used size. Therefore, we intend to present both numbers.
 */
struct ByteSize {
  size_t allocated = 0, used = 0;

  ByteSize& operator+=(const ByteSize& rhs) {
    this->allocated += rhs.allocated;
    this->used += rhs.used;
    return *this;
  }
};
}  // namespace xindex::_