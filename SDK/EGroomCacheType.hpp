#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroomCacheType : uint8_t {
    None = 0,
    Strands = 1,
    Guides = 2,
    EGroomCacheType_MAX = 3,
};
#pragma pack(pop)
