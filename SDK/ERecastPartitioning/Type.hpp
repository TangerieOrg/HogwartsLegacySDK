#pragma once
#include <cstdint>
namespace ERecastPartitioning {
#pragma pack(push, 1)
enum Type : uint8_t {
    Monotone = 0,
    Watershed = 1,
    ChunkyMonotone = 2,
    ERecastPartitioning_MAX = 3,
};
#pragma pack(pop)
}
