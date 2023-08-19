#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessShadows : public UActorMeshSetupProcessFiltered {
public:
    bool bCastShadow; // 0x30
    bool bCastDynamicShadow; // 0x31
    bool bCastStaticShadow; // 0x32
    bool bCastContactShadow; // 0x33
    FName NoContactShadowTag; // 0x34
    bool bOverride_bCastShadow; // 0x3c
    bool bOverride_bCastDynamicShadow; // 0x3d
    bool bOverride_bCastStaticShadow; // 0x3e
    bool bOverride_bCastContactShadow; // 0x3f
    static UActorMeshSetupProcessShadows* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
