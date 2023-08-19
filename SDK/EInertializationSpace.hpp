#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInertializationSpace {
    Default = 0,
    WorldSpace = 1,
    WorldRotation = 2,
    EInertializationSpace_MAX = 3,
};
#pragma pack(pop)
