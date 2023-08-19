#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService_CameraBase.hpp"
#pragma pack(push, 1)
class UBTService_CameraMount : public UBTService_CameraBase {
public:
    char pad_70[0x8];
    FBlackboardKeySelector MountingCreatureKey; // 0x78
    char pad_a0[0x8];
    FBlackboardKeySelector DismountingCreatureKey; // 0xa8
    char pad_d0[0x8];
    FBlackboardKeySelector TrotMountOrDismountKey; // 0xd8
    char pad_100[0x8];
    FBlackboardKeySelector MountGaitKey; // 0x108
    char pad_130[0x8];
    FBlackboardKeySelector MountMovementStateKey; // 0x138
    char pad_160[0x8];
    FBlackboardKeySelector MountTakingOffKey; // 0x168
    char pad_190[0x8];
    FBlackboardKeySelector MountMovementModeKey; // 0x198
    char pad_1c0[0x8];
    FBlackboardKeySelector MountChargingKey; // 0x1c8
    char pad_1f0[0x8];
    FBlackboardKeySelector MountIdleBreakKey; // 0x1f8
    static UBTService_CameraMount* StaticClass();
}; // Size: 0x220
#pragma pack(pop)
