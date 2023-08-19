#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EQuadrupedSpineChainType : uint8_t {
    Neck = 0,
    Spine = 1,
    Tail = 2,
    Invalid = 3,
    EQuadrupedSpineChainType_MAX = 4,
};
#pragma pack(pop)
