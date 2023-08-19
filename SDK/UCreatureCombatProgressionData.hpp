#pragma once
#include <cstdint>
#include "FCreatureCombatStageSpecifier.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCreatureCombatProgressionData : public UDataAsset {
public:
    TArray<FCreatureCombatStageSpecifier> CombatStages; // 0x30
    bool bDebugDraw; // 0x40
    bool bEnableDebugStageIndex; // 0x41
    char pad_42[0x2];
    int32_t DebugStageIndex; // 0x44
    static UCreatureCombatProgressionData* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
