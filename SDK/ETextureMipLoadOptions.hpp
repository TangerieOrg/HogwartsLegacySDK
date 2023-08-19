#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETextureMipLoadOptions : uint8_t {
    Default = 0,
    AllMips = 1,
    OnlyFirstMip = 2,
    OnlySecondMip = 3,
    ETextureMipLoadOptions_MAX = 4,
};
#pragma pack(pop)
