#pragma once
#include <cstdint>
#include "FMaterialSwapParameters.hpp"
class UMaterialSwapMeshState;
#pragma pack(push, 1)
struct FSkinFXExternalContext {
    FName FXName; // 0x0
    float TimeFactor; // 0x8
    char pad_c[0x4];
    FMaterialSwapParameters Values; // 0x10
    TArray<UMaterialSwapMeshState*> MeshStates; // 0x60
    char pad_70[0x10];
    bool bMeshStatesSet; // 0x80
    char pad_81[0x7];
}; // Size: 0x88
#pragma pack(pop)
