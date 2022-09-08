#pragma once

#include <cstddef>

/// private namespace for allocated bytes tracker.
/// Note: This is far from the correct way to do this in production code.
/// Just as an example, if more than one XIndex is instantiated anywhere
/// in the process in parallel, this number will be wrong since it is a global
/// variable.
/// For research purposes however, the speed at which we can get this
/// measurement working is far more important. We know and actively work around
/// its limitations by only ever having one XIndex at a time.
namespace xindex::_ {
static size_t allocated_bytes = 0;
}