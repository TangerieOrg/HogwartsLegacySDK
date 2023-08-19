#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPhysicalBodyBlendState : uint8_t {
    None = 0,
    BlendIn = 1,
    BlendOut = 2,
    Destroy = 3,
    EPhysicalBodyBlendState_MAX = 4,
};
#pragma pack(pop)
