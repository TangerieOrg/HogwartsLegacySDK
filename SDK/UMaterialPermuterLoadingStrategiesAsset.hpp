#pragma once
#include <cstdint>
#include "FMaterialPermuterLoadingStrategies.hpp"
#include "UDataAsset.hpp"
class UMaterialPermuterDynamicTrigger;
#pragma pack(push, 1)
class UMaterialPermuterLoadingStrategiesAsset : public UDataAsset {
public:
    TArray<UMaterialPermuterDynamicTrigger*> DynamicLoadingTriggers; // 0x30
    FMaterialPermuterLoadingStrategies Built; // 0x40
    static UMaterialPermuterLoadingStrategiesAsset* StaticClass();
    void BuildLoadingStrategies();
}; // Size: 0xc0
#pragma pack(pop)
