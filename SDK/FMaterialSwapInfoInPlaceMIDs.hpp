#pragma once
#include <cstdint>
#include "EMaterialSwapPriority.hpp"
#include "FMaterialSwapInfoInPlaceMIDsBase.hpp"
#include "FMaterialSwapRules.hpp"
class UMaterialSwapMeshState;
#pragma pack(push, 1)
struct FMaterialSwapInfoInPlaceMIDs : public FMaterialSwapInfoInPlaceMIDsBase {
    EMaterialSwapPriority Priority; // 0x8
    char pad_9[0x7];
    FMaterialSwapRules Rules; // 0x10
    TArray<UMaterialSwapMeshState*> MeshStates; // 0xf0
}; // Size: 0x100
#pragma pack(pop)
