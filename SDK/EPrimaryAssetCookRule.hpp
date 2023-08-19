#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPrimaryAssetCookRule : uint8_t {
    Unknown = 0,
    NeverCook = 1,
    DevelopmentCook = 2,
    DevelopmentAlwaysCook = 3,
    AlwaysCook = 4,
    EPrimaryAssetCookRule_MAX = 5,
};
#pragma pack(pop)
