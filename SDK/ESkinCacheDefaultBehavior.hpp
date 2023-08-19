#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinCacheDefaultBehavior : uint8_t {
    Exclusive = 0,
    Inclusive = 1,
    ESkinCacheDefaultBehavior_MAX = 2,
};
#pragma pack(pop)
