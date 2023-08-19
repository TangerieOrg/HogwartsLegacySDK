#pragma once
#include <cstdint>
#include "UEnemy_QBUpdateData.hpp"
class AActor;
#pragma pack(push, 1)
class UEnemy_Follow_QBUpdateData : public UEnemy_QBUpdateData {
public:
    float MinDistance; // 0x30
    float MaxDistance; // 0x34
    float Threshold; // 0x38
    char pad_3c[0x4];
    AActor* ActorToFollow; // 0x40
    float SuccessCooldown; // 0x48
    float FailedCooldown; // 0x4c
    float MinAngle; // 0x50
    float MaxAngle; // 0x54
    static UEnemy_Follow_QBUpdateData* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
