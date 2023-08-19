#pragma once
#include <cstdint>
#include "ECreatureNavMeshTurnDirection.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FTurnDirectionNavMeshCheckSettings {
    bool bDoNavMeshCheck; // 0x0
    bool bForceSuccessIfMount; // 0x1
    ECreatureNavMeshTurnDirection TurnDirection; // 0x2
    bool bIncActorRadius; // 0x3
    float TurnDiameterScalar; // 0x4
    float TurnLengthScalar; // 0x8
    float BoxExtentsZ; // 0xc
    bool bDebugDrawing; // 0x10
    char pad_11[0x7];
    FGameplayTagContainer TagsIfNavMeshCheckFails; // 0x18
}; // Size: 0x38
#pragma pack(pop)
