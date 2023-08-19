#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FWordRow : public FTableRowBase {
    FString Locale; // 0x8
    bool bAlwaysCheck; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
