#pragma once
#include <cstdint>
#include "ENPC_Tether.hpp"
#include "EStartVecMethod.hpp"
#include "FVector.hpp"
#include "UAblAvaMotionWarpSyncPointUpdater.hpp"
#pragma pack(push, 1)
class UAblTetherLocSyncPointUpdater : public UAblAvaMotionWarpSyncPointUpdater {
public:
    float TetherDistance; // 0x28
    float TetherDistanceRandomFloor; // 0x2c
    float TetherDistanceRandomCeiling; // 0x30
    EStartVecMethod StartVectorMethod; // 0x34
    char pad_35[0x3];
    FVector ReferenceVector; // 0x38
    float MinRandomAngle; // 0x44
    float MaxRandomAngle; // 0x48
    float MaxTetherAngle; // 0x4c
    int32_t Divisions; // 0x50
    bool bInApplyTether; // 0x54
    ENPC_Tether TetherType; // 0x55
    char pad_56[0x2];
    float DesiredDistanceToTarget; // 0x58
    bool bAllowPositiveTravel; // 0x5c
    bool bAllowNegativeTravel; // 0x5d
    char pad_5e[0x2];
    static UAblTetherLocSyncPointUpdater* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
