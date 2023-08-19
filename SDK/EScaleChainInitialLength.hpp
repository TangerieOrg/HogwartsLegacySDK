#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EScaleChainInitialLength : uint8_t {
    FixedDefaultLengthValue = 0,
    Distance = 1,
    ChainLength = 2,
    EScaleChainInitialLength_MAX = 3,
};
#pragma pack(pop)
