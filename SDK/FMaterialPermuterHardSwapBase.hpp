#pragma once
#include <cstdint>
#include "EMaterialPermuterParameterCopy.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FMaterialSwapParametersSimple.hpp"
class UMaterialSwapMeshState;
#pragma pack(push, 1)
struct FMaterialPermuterHardSwapBase {
    FMaterialPermuterKey Key; // 0x0
    FMaterialSwapParametersSimple Parameters; // 0x10
    TArray<UMaterialSwapMeshState*> MeshStates; // 0x40
    EMaterialPermuterParameterCopy ParameterCopy; // 0x50
    bool bDisableMIDSharing; // 0x51
    char pad_52[0x6];
}; // Size: 0x58
#pragma pack(pop)
