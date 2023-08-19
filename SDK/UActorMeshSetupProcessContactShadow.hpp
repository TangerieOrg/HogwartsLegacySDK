#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessContactShadow : public UActorMeshSetupProcessFiltered {
public:
    bool bCastContactShadow; // 0x30
    char pad_31[0x3];
    FName NoContactShadowTag; // 0x34
    char pad_3c[0x4];
    static UActorMeshSetupProcessContactShadow* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
