#pragma once
#include <cstdint>
#include "FAIDataProviderTypedValue.hpp"
#pragma pack(push, 1)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue {
    bool DefaultValue; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
