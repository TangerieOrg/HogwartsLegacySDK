#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUsdInitialLoadSet : uint8_t {
    LoadAll = 0,
    LoadNone = 1,
    EUsdInitialLoadSet_MAX = 2,
};
#pragma pack(pop)
