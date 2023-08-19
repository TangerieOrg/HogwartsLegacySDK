#pragma once
#include <cstdint>
#include "FAIDataProviderTypedValue.hpp"
#pragma pack(push, 1)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue {
    int32_t DefaultValue; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
