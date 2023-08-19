#pragma once
#include <cstdint>
#include "FMaterialParameterSetter.hpp"
#include "FMultiFXWrapper.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UEnemyCorruptionData : public UDataAsset {
public:
    TArray<FMaterialParameterSetter> CorruptionStartMaterialFXs; // 0x30
    FMultiFXWrapper CorruptionFX; // 0x40
    TArray<FMaterialParameterSetter> CorruptionStopMaterialFXs; // 0x78
    FMultiFXWrapper CorruptionStopParticalFX; // 0x88
    static UEnemyCorruptionData* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
