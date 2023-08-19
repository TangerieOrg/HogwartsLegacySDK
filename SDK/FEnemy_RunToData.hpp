#pragma once
#include <cstdint>
#include "EEnemy_ParryRunToType.hpp"
#include "FEnemy_AttackSpecificData.hpp"
#include "FNPC_MobilityData.hpp"
class UClass;
#pragma pack(push, 1)
struct FEnemy_RunToData : public FEnemy_AttackSpecificData {
    char pad_1[0x3];
    float RunToRangeMin; // 0x4
    float RunToRangeMax; // 0x8
    float RunMinDist; // 0xc
    float DistTolerance; // 0x10
    float Timeout; // 0x14
    float AbortDist; // 0x18
    char pad_1c[0x4];
    UClass* PreMoveStartAbility; // 0x20
    TArray<FNPC_MobilityData> MobilityData; // 0x28
    EEnemy_ParryRunToType ParryRunToType; // 0x38
    char pad_39[0x3];
    float ParryRunToSpeedEstimate; // 0x3c
    bool ParryRunToUseVelocityInAttackTimeOfImpact; // 0x40
    char pad_41[0x7];
}; // Size: 0x48
#pragma pack(pop)
