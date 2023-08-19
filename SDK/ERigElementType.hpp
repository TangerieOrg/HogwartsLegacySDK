#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigElementType : uint8_t {
    None = 0,
    Bone = 1,
    Space = 2,
    Control = 4,
    Curve = 8,
    All = 15,
    ERigElementType_MAX = 16,
};
#pragma pack(pop)
