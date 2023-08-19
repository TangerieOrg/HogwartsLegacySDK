#pragma once
#include <cstdint>
#include "EGenderEnum.hpp"
#include "UDataAsset.hpp"
class UObject;
#pragma pack(push, 1)
class UCustomizableCharacterDefinition : public UDataAsset {
public:
    EGenderEnum Gender; // 0x30
    char pad_31[0x57];
    float Scale; // 0x88
    char pad_8c[0xa4];
    TArray<UObject*> ExtraObjects; // 0x130
    static UCustomizableCharacterDefinition* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
