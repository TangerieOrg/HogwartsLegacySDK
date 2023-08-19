#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFontCacheType : uint8_t {
    Offline = 0,
    Runtime = 1,
    EFontCacheType_MAX = 2,
};
#pragma pack(pop)
