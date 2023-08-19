#pragma once
#include <cstdint>
#include "ECollisionEnabled\Type.hpp"
#include "UCapsuleComponent.hpp"
#pragma pack(push, 1)
class UNPC_MovementCapsuleComponent : public UCapsuleComponent {
public:
    bool bUseBoneLocationTracking; // 0x4a0
    char pad_4a1[0x3];
    FName BoneNameToLocationTrack; // 0x4a4
    float CapsuleLocationInterpToSpeed; // 0x4ac
    float StartTrackingLocationTolerance; // 0x4b0
    float EndTrackingLocationTolerance; // 0x4b4
    bool bTrackBoneZ; // 0x4b8
    bool bUseInFloorSweep; // 0x4b9
    bool bDisabledAtSpawn; // 0x4ba
    bool bDisabledAlways; // 0x4bb
    ECollisionEnabled::Type ActivateCollisionEnabledType; // 0x4bc
    char pad_4bd[0x23];
    static UNPC_MovementCapsuleComponent* StaticClass();
}; // Size: 0x4e0
#pragma pack(pop)
