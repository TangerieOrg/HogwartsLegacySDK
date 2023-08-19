#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "FFloatInterval.hpp"
class UCreatureLookAtTargetEvaluationConfig;
class ACreature_Character;
#pragma pack(push, 1)
struct FCreatureLookAtBehavior {
    ETargetID::Type TargetTrackerTargetID; // 0x0
    char pad_1[0x3];
    int32_t TargetEvaluationMaxLOD; // 0x4
    FFloatInterval TargetEvaluationInterval; // 0x8
    UCreatureLookAtTargetEvaluationConfig* TargetEvaluationConfig; // 0x10
    float LookAroundMinTime; // 0x18
    float LookAroundMaxTime; // 0x1c
    float LookAroundMaxPitchUp; // 0x20
    float LookAroundMaxPitchDown; // 0x24
    float LookAroundMinYaw; // 0x28
    float LookAroundMaxYaw; // 0x2c
    float LookAroundMinDistance; // 0x30
    float LookAroundMaxDistance; // 0x34
    char pad_38[0x50];
    ACreature_Character* OwnerCreature; // 0x88
}; // Size: 0x90
#pragma pack(pop)
