#include "AActor.hpp"
#include "ABP_BreakableWall_C.hpp"
#include "ABP_LargeBreakableWallBase_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_BreakableWall_C* ABP_BreakableWall_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Cairn_Dungeon/BP_BreakableWall.BP_BreakableWall_C");
    return (ABP_BreakableWall_C*)res;
}
void ABP_BreakableWall_C::CustomPlayDepulssoVO__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Cairn_Dungeon/BP_BreakableWall.BP_BreakableWall_C.CustomPlayDepulssoVO__DelegateSignature"));
    struct Params_CustomPlayDepulssoVO__DelegateSignature {
    }; // Size: 0x0
    Params_CustomPlayDepulssoVO__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableWall_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Cairn_Dungeon/BP_BreakableWall.BP_BreakableWall_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableWall_C::ForceBreakActor(AActor* ActorToBreak) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Cairn_Dungeon/BP_BreakableWall.BP_BreakableWall_C.ForceBreakActor"));
    struct Params_ForceBreakActor {
        AActor* ActorToBreak; // 0x0
    }; // Size: 0x8
    Params_ForceBreakActor params{};
    params.ActorToBreak = (AActor*)ActorToBreak;
    ProcessEvent(func, &params);
}
void ABP_BreakableWall_C::ExecuteUbergraph_BP_BreakableWall(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Cairn_Dungeon/BP_BreakableWall.BP_BreakableWall_C.ExecuteUbergraph_BP_BreakableWall"));
    struct Params_ExecuteUbergraph_BP_BreakableWall {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_BreakableWall params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void ABP_BreakableWall_C::HitWithDepulso__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Cairn_Dungeon/BP_BreakableWall.BP_BreakableWall_C.HitWithDepulso__DelegateSignature"));
    struct Params_HitWithDepulso__DelegateSignature {
    }; // Size: 0x0
    Params_HitWithDepulso__DelegateSignature params{};
    ProcessEvent(func, &params);
}
