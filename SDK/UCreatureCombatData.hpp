#pragma once
#include <cstdint>
#include "ECreatureCombatDebugBehaviorType.hpp"
#include "ECreatureCombatDebugDisplayType.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCreatureCombatData : public UDataAsset {
public:
    ECreatureCombatDebugDisplayType DrawDebug; // 0x30
    ECreatureCombatDebugBehaviorType ForceBehavior; // 0x31
    char pad_32[0x6];
    static UCreatureCombatData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
