#pragma once
#include <cstdint>
#include "EMaterialPermuterParameterCopy.hpp"
#include "EMaterialSwapInfoTyoe.hpp"
#include "EMaterialSwapPriority.hpp"
#include "FMaterialSwapInfoBase.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapRules.hpp"
class UMaterialInterface;
class UMaterialSwapMeshState;
#pragma pack(push, 1)
struct FMaterialSwapInfo : public FMaterialSwapInfoBase {
    EMaterialSwapPriority Priority; // 0x8
    EMaterialSwapInfoTyoe SwapType; // 0x9
    char pad_a[0x2];
    FName Group; // 0xc
    FName SubType; // 0x14
    char pad_1c[0x4];
    UMaterialInterface* MaterialOverride; // 0x20
    TArray<UMaterialInterface*> MaterialOverrides; // 0x28
    EMaterialPermuterParameterCopy ParameterCopy; // 0x38
    char pad_39[0x7];
    FMaterialSwapRules Rules; // 0x40
    FMaterialSwapParameters InitialParameters; // 0x120
    TArray<UMaterialSwapMeshState*> MeshStates; // 0x170
}; // Size: 0x180
#pragma pack(pop)
