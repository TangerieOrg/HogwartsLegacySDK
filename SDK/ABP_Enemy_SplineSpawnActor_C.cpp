#include "ABP_Enemy_SplineSpawnActor_C.hpp"
#include "AEnemy_SplineSpawnActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Enemy_SplineSpawnActor_C* ABP_Enemy_SplineSpawnActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Misc/BP_Enemy_SplineSpawnActor.BP_Enemy_SplineSpawnActor_C");
    return (ABP_Enemy_SplineSpawnActor_C*)res;
}
void ABP_Enemy_SplineSpawnActor_C::ApplyStartFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Misc/BP_Enemy_SplineSpawnActor.BP_Enemy_SplineSpawnActor_C.ApplyStartFX"));
    struct Params_ApplyStartFX {
    }; // Size: 0x0
    Params_ApplyStartFX params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_SplineSpawnActor_C::ApplyStopFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Misc/BP_Enemy_SplineSpawnActor.BP_Enemy_SplineSpawnActor_C.ApplyStopFX"));
    struct Params_ApplyStopFX {
    }; // Size: 0x0
    Params_ApplyStopFX params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_SplineSpawnActor_C::ExecuteUbergraph_BP_Enemy_SplineSpawnActor(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
