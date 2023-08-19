#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessDitheredAlpha : public UActorMeshSetupProcessFiltered {
public:
    float DitheredAlpha; // 0x30
    char pad_34[0x4];
    static UActorMeshSetupProcessDitheredAlpha* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
