#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimAlphaInputType : uint8_t {
    Float = 0,
    Bool = 1,
    Curve = 2,
    EAnimAlphaInputType_MAX = 3,
};
#pragma pack(pop)
