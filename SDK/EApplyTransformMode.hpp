#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EApplyTransformMode : uint8_t {
    Override = 0,
    Additive = 1,
    Max = 2,
};
#pragma pack(pop)
