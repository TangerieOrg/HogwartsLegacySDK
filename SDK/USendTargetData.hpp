#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class USendTargetData : public UDataAsset {
public:
    bool bShowDebug; // 0x30
    bool bDebugShowPossibleTargets; // 0x31
    char pad_32[0x2];
    float SendTargetIgnoreNearDistance; // 0x34
    float SendAngleScale; // 0x38
    float SendDistanceScale; // 0x3c
    float SendPriorityScale; // 0x40
    float CharacterOffsetZ; // 0x44
    float CollisionTargetMinVel; // 0x48
    int32_t CollisionTargetHalfAngle; // 0x4c
    int32_t CollisionTargetChance; // 0x50
    char pad_54[0x4];
    static USendTargetData* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
