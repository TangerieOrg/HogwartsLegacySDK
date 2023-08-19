#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStatesBaseComponent.hpp"
class UMaterialSwapMeshState;
#pragma pack(push, 1)
class UMaterialSwapMeshStatesComponent : public UMaterialSwapMeshStatesBaseComponent {
public:
    TArray<UMaterialSwapMeshState*> MeshStates; // 0xf0
    bool bIncludeChildren; // 0x100
    bool bUpdateOnTick; // 0x101
    char pad_102[0x6];
    static UMaterialSwapMeshStatesComponent* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
