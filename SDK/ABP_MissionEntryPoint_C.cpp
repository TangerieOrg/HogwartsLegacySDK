#include "ABP_MissionEntryPoint_C.hpp"
#include "AMissionEntryPoint.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_MissionEntryPoint_C* ABP_MissionEntryPoint_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/MissionObjects/Blueprints/BP_MissionEntryPoint.BP_MissionEntryPoint_C");
    return (ABP_MissionEntryPoint_C*)res;
}
void ABP_MissionEntryPoint_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/MissionObjects/Blueprints/BP_MissionEntryPoint.BP_MissionEntryPoint_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_MissionEntryPoint_C::ExecuteUbergraph_BP_MissionEntryPoint(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/MissionObjects/Blueprints/BP_MissionEntryPoint.BP_MissionEntryPoint_C.ExecuteUbergraph_BP_MissionEntryPoint"));
    struct Params_ExecuteUbergraph_BP_MissionEntryPoint {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_MissionEntryPoint params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
