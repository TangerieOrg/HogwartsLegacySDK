#pragma once
#include <cstdint>
class UFunction;
class UClass;
#pragma pack(push, 1)
struct FGameplayProperty {
    FName TypeName; // 0x0
    FName UpdateFunctionName; // 0x8
    UFunction* OnUpdatedCallback; // 0x10
    bool bSkipUpdateOnTick; // 0x18
    char pad_19[0x7];
    TArray<UClass*> SupportedOnAddModFilters; // 0x20
    TArray<UClass*> SupportedOnApplyModFilters; // 0x30
    char pad_40[0x10];
}; // Size: 0x50
#pragma pack(pop)
