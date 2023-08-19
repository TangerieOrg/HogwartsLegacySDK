#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessIgnoreLightLeaking : public UActorMeshSetupProcessFiltered {
public:
    bool bIgnoreLightLeakingCorrection; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessIgnoreLightLeaking* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
