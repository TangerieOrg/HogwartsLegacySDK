#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessBoundsScale : public UActorMeshSetupProcessFiltered {
public:
    float BoundsScale; // 0x30
    char pad_34[0x4];
    static UActorMeshSetupProcessBoundsScale* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
