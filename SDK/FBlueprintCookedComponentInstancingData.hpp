#pragma once
#include <cstdint>
#include "FBlueprintComponentChangedPropertyInfo.hpp"
#pragma pack(push, 1)
struct FBlueprintCookedComponentInstancingData {
    TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
    char pad_10[0x11];
    bool bHasValidCookedData; // 0x21
    char pad_22[0x26];
}; // Size: 0x48
#pragma pack(pop)
