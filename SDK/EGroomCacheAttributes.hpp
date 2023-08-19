#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroomCacheAttributes : uint8_t {
    None = 0,
    Position = 1,
    Width = 2,
    Color = 4,
    EGroomCacheAttributes_MAX = 5,
};
#pragma pack(pop)
