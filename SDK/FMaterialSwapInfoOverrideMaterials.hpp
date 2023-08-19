#pragma once
#include <cstdint>
#include "EMaterialPermuterParameterCopy.hpp"
#include "EMaterialSwapPriority.hpp"
#include "FMaterialSwapInfoBase.hpp"
#include "FMaterialSwapRules.hpp"
class UMaterialInterface;
class UMaterialSwapMeshState;
#pragma pack(push, 1)
struct FMaterialSwapInfoOverrideMaterials : public FMaterialSwapInfoBase {
    TArray<UMaterialInterface*> MaterialOverrides; // 0x8
    EMaterialSwapPriority Priority; // 0x18
    char pad_19[0x7];
    FMaterialSwapRules Rules; // 0x20
    TArray<UMaterialSwapMeshState*> MeshStates; // 0x100
    EMaterialPermuterParameterCopy ParameterCopy; // 0x110
    char pad_111[0x7];
}; // Size: 0x118
#pragma pack(pop)
