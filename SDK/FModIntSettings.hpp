#pragma once
#include <cstdint>
#include "FModSettingsNumeric.hpp"
#pragma pack(push, 1)
struct FModIntSettings : public FModSettingsNumeric {
    int32_t FixedAmount; // 0x118
    char pad_11c[0x4];
}; // Size: 0x120
#pragma pack(pop)
