#pragma once
#include <cstdint>
class UMaterialSwapMeshState;
class UMaterialSwapMeshStateData;
#pragma pack(push, 1)
struct FMaterialSwapMeshStatesAndData {
    TArray<UMaterialSwapMeshState*> States; // 0x0
    TArray<UMaterialSwapMeshStateData*> Data; // 0x10
}; // Size: 0x20
#pragma pack(pop)
