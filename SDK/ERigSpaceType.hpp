#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigSpaceType : uint8_t {
    Global = 0,
    Bone = 1,
    Control = 2,
    Space = 3,
    ERigSpaceType_MAX = 4,
};
#pragma pack(pop)
