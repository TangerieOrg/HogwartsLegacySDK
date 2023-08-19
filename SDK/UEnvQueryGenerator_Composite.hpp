#pragma once
#include <cstdint>
#include "UEnvQueryGenerator.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator {
public:
    TArray<UEnvQueryGenerator*> Generators; // 0x50
    uint8_t bAllowDifferentItemTypes : 1; // 0x60
    uint8_t bHasMatchingItemType : 1; // 0x60
    uint8_t pad_bitfield_60_2 : 6;
    char pad_61[0x7];
    UClass* ForcedItemType; // 0x68
    static UEnvQueryGenerator_Composite* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
