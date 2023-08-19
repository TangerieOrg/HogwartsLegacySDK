#pragma once
#include <cstdint>
#include "EMaterialPermuterParameterCopy.hpp"
#include "EMaterialSwapPriority.hpp"
#include "FMaterialSwapInfoOverrideMaterialBase.hpp"
#include "FMaterialSwapRules.hpp"
class UMaterialInterface;
class UMaterialSwapMeshState;
#pragma pack(push, 1)
struct FMaterialSwapInfoOverrideMaterial : public FMaterialSwapInfoOverrideMaterialBase {
    UMaterialInterface* MaterialOverride; // 0x8
    EMaterialSwapPriority Priority; // 0x10
    char pad_11[0x7];
    FMaterialSwapRules Rules; // 0x18
    TArray<UMaterialSwapMeshState*> MeshStates; // 0xf8
    EMaterialPermuterParameterCopy ParameterCopy; // 0x108
    char pad_109[0x7];
}; // Size: 0x110
#pragma pack(pop)
