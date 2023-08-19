#include "ABP_SpiderBase_Medium_C.hpp"
#include "ABP_Spider_Woodlouse_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_Spider_Woodlouse_C* ABP_Spider_Woodlouse_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/BP_Spider_WoodLouse.BP_Spider_Woodlouse_C");
    return (ABP_Spider_Woodlouse_C*)res;
}
void ABP_Spider_Woodlouse_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_Spider_WoodLouse.BP_Spider_Woodlouse_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Spider_Woodlouse_C::ExecuteUbergraph_BP_Spider_Woodlouse(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_Spider_WoodLouse.BP_Spider_Woodlouse_C.ExecuteUbergraph_BP_Spider_Woodlouse"));
    struct Params_ExecuteUbergraph_BP_Spider_Woodlouse {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Spider_Woodlouse params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
