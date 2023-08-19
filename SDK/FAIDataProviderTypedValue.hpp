#pragma once
#include <cstdint>
#include "FAIDataProviderValue.hpp"
class UClass;
#pragma pack(push, 1)
struct FAIDataProviderTypedValue : public FAIDataProviderValue {
    UClass* PropertyType; // 0x20
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
