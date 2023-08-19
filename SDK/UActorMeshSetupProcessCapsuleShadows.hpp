#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessCapsuleShadows : public UActorMeshSetupProcessFiltered {
public:
    bool bCastCapsuleDirectShadow; // 0x30
    bool bCastCapsuleIndirectShadow; // 0x31
    char pad_32[0x2];
    float CapsuleIndirectShadowMinVisibility; // 0x34
    bool bCanUsePhysicsCapsulesToShadow; // 0x38
    bool bForcePhysicsCapsulesToShadow; // 0x39
    bool bOverride_bCastCapsuleDirectShadow; // 0x3a
    bool bOverride_bCastCapsuleIndirectShadow; // 0x3b
    bool bOverride_CapsuleIndirectShadowMinVisibility; // 0x3c
    char pad_3d[0x3];
    static UActorMeshSetupProcessCapsuleShadows* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
