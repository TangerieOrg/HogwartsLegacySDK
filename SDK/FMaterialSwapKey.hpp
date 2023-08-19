#pragma once
#include <cstdint>
#include "EMaterialSwapPriority.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FMaterialSwapKeyBase.hpp"
#include "FMaterialSwapRules.hpp"
class UMaterialSwapMeshState;
#pragma pack(push, 1)
struct FMaterialSwapKey : public FMaterialSwapKeyBase {
    FMaterialPermuterKey Key; // 0x8
    EMaterialSwapPriority Priority; // 0x18
    char pad_19[0x7];
    FMaterialSwapRules Rules; // 0x20
    TArray<UMaterialSwapMeshState*> MeshStates; // 0x100
}; // Size: 0x110
#pragma pack(pop)
