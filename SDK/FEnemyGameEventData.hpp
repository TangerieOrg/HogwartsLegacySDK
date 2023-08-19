#pragma once
#include <cstdint>
#include "ENPC_TurnAssistState.hpp"
#include "FGameplayTag.hpp"
class UClass;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
struct FEnemyGameEventData {
    FGameplayTag GameEventTag; // 0x0
    UClass* TargetAbilityPtr; // 0x8
    ENPC_TurnAssistState TargetTurnState; // 0x10
    char pad_11[0x7];
    UInteractionArchitectAsset* TargetIAAssetPtr; // 0x18
    UClass* ObserverAbilityPtr; // 0x20
    ENPC_TurnAssistState ObserverTurnState; // 0x28
    char pad_29[0x7];
    UInteractionArchitectAsset* ObserverIAAssetPtr; // 0x30
}; // Size: 0x38
#pragma pack(pop)
