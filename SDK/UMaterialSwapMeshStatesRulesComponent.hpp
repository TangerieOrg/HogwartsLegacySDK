#pragma once
#include <cstdint>
#include "FMaterialSwapRules.hpp"
#include "UMaterialSwapMeshStatesBaseComponent.hpp"
class UMaterialSwapMeshState;
#pragma pack(push, 1)
class UMaterialSwapMeshStatesRulesComponent : public UMaterialSwapMeshStatesBaseComponent {
public:
    TArray<UMaterialSwapMeshState*> MeshStates; // 0xf0
    FMaterialSwapRules Rules; // 0x100
    bool bUpdateOnTick; // 0x1e0
    char pad_1e1[0x7];
    static UMaterialSwapMeshStatesRulesComponent* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)
