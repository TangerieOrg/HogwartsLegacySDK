#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UGameplayPropertyMod;
class UFunction;
class UGameplayModComponent;
#pragma pack(push, 1)
struct FModEntry {
    UGameplayPropertyMod* Modifier; // 0x0
    UFunction* InputValueProvider; // 0x8
    UGameplayModComponent* OwnerModComponent; // 0x10
    FGuid Handle; // 0x18
    float CurrentLifeTime; // 0x28
    bool bRemove; // 0x2c
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
