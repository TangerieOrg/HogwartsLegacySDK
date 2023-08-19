#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessCapsuleShadows.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessSetupCharacterShadows : public UActorMeshSetupProcessCapsuleShadows {
public:
    bool bCastShadow; // 0x40
    bool bCastDynamicShadow; // 0x41
    bool bCastStaticShadow; // 0x42
    bool bCastContactShadow; // 0x43
    FName NoContactShadowTag; // 0x44
    bool bOverride_bCastShadow; // 0x4c
    bool bOverride_bCastDynamicShadow; // 0x4d
    bool bOverride_bCastStaticShadow; // 0x4e
    bool bOverride_bCastContactShadow; // 0x4f
    static UActorMeshSetupProcessSetupCharacterShadows* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
