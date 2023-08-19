#pragma once
#include <cstdint>
#include "FMaterialSwapRules.hpp"
#include "UMaterialSwapMeshStatesBaseComponent.hpp"
class UMaterialSwapMeshState;
class AActor;
#pragma pack(push, 1)
class UMaterialSwapMeshStatesFireAndForgetComponent : public UMaterialSwapMeshStatesBaseComponent {
public:
    char pad_f0[0x8];
    FMaterialSwapRules Rules; // 0xf8
    bool bUseRules; // 0x1d8
    bool bIncludeChildren; // 0x1d9
    bool bUpdateOnTick; // 0x1da
    char pad_1db[0x5];
    static UMaterialSwapMeshStatesFireAndForgetComponent* StaticClass();
    void RestartMeshStates(TArray<UMaterialSwapMeshState*>& MeshStates);
    static UMaterialSwapMeshStatesFireAndForgetComponent* CreateMeshStatesFireAndForgetComponentRules(AActor* Owner, AActor* Target, TArray<UMaterialSwapMeshState*>& MeshStates, FMaterialSwapRules UseRules, bool bAutoUpdate, FName Tag);
    static UMaterialSwapMeshStatesFireAndForgetComponent* CreateMeshStatesFireAndForgetComponent(AActor* Owner, AActor* Target, TArray<UMaterialSwapMeshState*>& MeshStates, bool bShouldIncludeChildren, bool bAutoUpdate, FName Tag);
}; // Size: 0x1e0
#pragma pack(pop)
