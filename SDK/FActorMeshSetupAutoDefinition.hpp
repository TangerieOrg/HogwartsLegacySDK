#pragma once
#include <cstdint>
#include "FActorMeshSetupDefinition.hpp"
#pragma pack(push, 1)
struct FActorMeshSetupAutoDefinition : public FActorMeshSetupDefinition {
    bool bKeepProcessing; // 0x18
    char pad_19[0x3];
    FName Tag; // 0x1c
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
