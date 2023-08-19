#pragma once
#include <cstdint>
#include "FMaterialSwapMeshStatesAndData.hpp"
#include "UActorComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UMaterialSwapMeshStatesBaseComponent : public UActorComponent {
public:
    FMaterialSwapMeshStatesAndData MeshStatesAndData; // 0xc8
    FName MeshStatesTag; // 0xe8
    static UMaterialSwapMeshStatesBaseComponent* StaticClass();
    static void KillMaterialSwapMeshStatesComponent(UMaterialSwapMeshStatesBaseComponent* MaterialSwapMeshStatesComponent, bool& bSuccess);
    static void KillAllMaterialSwapMeshStatesComponentsByTag(AActor* Target, FName Tag, int32_t& CountOfDestroyed);
    static void CountAllMaterialSwapMeshStatesComponentsByTag(AActor* Target, FName Tag, int32_t& ActiveCount);
}; // Size: 0xf0
#pragma pack(pop)
