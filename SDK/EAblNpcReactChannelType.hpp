#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblNpcReactChannelType : uint8_t {
    Fullbody = 0,
    Additive = 1,
    PartialBody = 2,
    EAblNpcReactChannelType_MAX = 3,
};
#pragma pack(pop)
