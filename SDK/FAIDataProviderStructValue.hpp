#pragma once
#include <cstdint>
#include "FAIDataProviderValue.hpp"
#pragma pack(push, 1)
struct FAIDataProviderStructValue : public FAIDataProviderValue {
    char pad_20[0x10];
}; // Size: 0x30
#pragma pack(pop)
