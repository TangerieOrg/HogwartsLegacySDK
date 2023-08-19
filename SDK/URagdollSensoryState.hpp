#pragma once
#include <cstdint>
#include "FRagdollSensoryBehavior.hpp"
#include "FRagdollSensoryCollision.hpp"
#include "FRagdollSensoryRange.hpp"
#include "FRagdollSensoryStatus.hpp"
#include "FRagdollState.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URagdollSensoryState : public UDataAsset {
public:
    TArray<FRagdollSensoryRange> SensoryRangeMatches; // 0x30
    TArray<FRagdollSensoryStatus> SensoryStatusMatches; // 0x40
    TArray<FRagdollSensoryBehavior> SensoryBehaviorsMatches; // 0x50
    TArray<FRagdollSensoryCollision> SensoryCollisionMatches; // 0x60
    FRagdollState AndRequire; // 0x70
    static URagdollSensoryState* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
