#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UOverlapEffectsClothingDataAsset : public UDataAsset {
public:
    TArray<FString> TightNames; // 0x30
    TArray<FString> LooseNames; // 0x40
    TArray<FString> CapeOrRobeNames; // 0x50
    static UOverlapEffectsClothingDataAsset* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
