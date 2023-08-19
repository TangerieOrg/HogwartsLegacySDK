#include "ABP_SpiderBase_Medium_C.hpp"
#include "ABP_Spider_Woodlouse_Spitter_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_Spider_Woodlouse_Spitter_C* ABP_Spider_Woodlouse_Spitter_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/BP_Spider_Woodlouse_Spitter.BP_Spider_Woodlouse_Spitter_C");
    return (ABP_Spider_Woodlouse_Spitter_C*)res;
}
void ABP_Spider_Woodlouse_Spitter_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_Spider_Woodlouse_Spitter.BP_Spider_Woodlouse_Spitter_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Spider_Woodlouse_Spitter_C::ExecuteUbergraph_BP_Spider_Woodlouse_Spitter(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_Spider_Woodlouse_Spitter.BP_Spider_Woodlouse_Spitter_C.ExecuteUbergraph_BP_Spider_Woodlouse_Spitter"));
    struct Params_ExecuteUbergraph_BP_Spider_Woodlouse_Spitter {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Spider_Woodlouse_Spitter params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
