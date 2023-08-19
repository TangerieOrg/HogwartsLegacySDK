#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FSoftObjectPath.hpp"
class ULevelVariantSets;
#pragma pack(push, 1)
class ALevelVariantSetsActor : public AActor {
public:
    FSoftObjectPath LevelVariantSets; // 0x248
    char pad_260[0x50];
    static ALevelVariantSetsActor* StaticClass();
    bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);
    bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);
    void SetLevelVariantSets(ULevelVariantSets* InVariantSets);
    ULevelVariantSets* GetLevelVariantSets(bool bLoad);
}; // Size: 0x2b0
#pragma pack(pop)
