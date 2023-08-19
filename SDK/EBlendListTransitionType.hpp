#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBlendListTransitionType : uint8_t {
    StandardBlend = 0,
    Inertialization = 1,
    EBlendListTransitionType_MAX = 2,
};
#pragma pack(pop)
