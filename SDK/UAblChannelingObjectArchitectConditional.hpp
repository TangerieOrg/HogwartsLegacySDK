#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblChannelingBase.hpp"
class UClass;
class UObjectArchitectAsset;
#pragma pack(push, 1)
class UAblChannelingObjectArchitectConditional : public UAblChannelingBase {
public:
    FGameplayTagContainer BranchTags; // 0x30
    UClass* BranchAbility; // 0x50
    UObjectArchitectAsset* ObjectArchitectAsset; // 0x58
    static UAblChannelingObjectArchitectConditional* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
