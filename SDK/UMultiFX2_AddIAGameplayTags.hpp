#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UMultiFX2_Filtered.hpp"
#pragma pack(push, 1)
class UMultiFX2_AddIAGameplayTags : public UMultiFX2_Filtered {
public:
    FGameplayTagContainer GameplayTags; // 0x68
    static UMultiFX2_AddIAGameplayTags* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
