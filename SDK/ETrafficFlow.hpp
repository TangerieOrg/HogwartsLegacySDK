#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETrafficFlow : uint8_t {
    Forward = 0,
    Backwards = 1,
    Bidirectional = 2,
    Blocked = 3,
    Random = 4,
    ETrafficFlow_MAX = 5,
};
#pragma pack(pop)
