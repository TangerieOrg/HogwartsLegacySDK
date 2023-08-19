#pragma once
#include <cstdint>
#include "AEnemy_SplineSpawnActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UNiagaraComponent;
class USceneComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class ABP_Enemy_SplineSpawnActor_C : public AEnemy_SplineSpawnActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3b0
    UNiagaraComponent* Niagara; // 0x3b8
    UStaticMeshComponent* Sphere; // 0x3c0
    USceneComponent* DefaultSceneRoot; // 0x3c8
    static ABP_Enemy_SplineSpawnActor_C* StaticClass();
    void ApplyStartFX();
    void ApplyStopFX();
    void ExecuteUbergraph_BP_Enemy_SplineSpawnActor(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x3d0
#pragma pack(pop)
