#include "ABP_StandStation_LookingAt_4p_C.hpp"
#include "ABP_Station_Propless4p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UStationArchitectComponent.hpp"
ABP_StandStation_LookingAt_4p_C* ABP_StandStation_LookingAt_4p_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Stand/BP_StandStation_LookingAt_4p.BP_StandStation_LookingAt_4p_C");
    return (ABP_StandStation_LookingAt_4p_C*)res;
}
void ABP_StandStation_LookingAt_4p_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Stand/BP_StandStation_LookingAt_4p.BP_StandStation_LookingAt_4p_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_StandStation_LookingAt_4p_C::ExecuteUbergraph_BP_StandStation_LookingAt_4p(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Stand/BP_StandStation_LookingAt_4p.BP_StandStation_LookingAt_4p_C.ExecuteUbergraph_BP_StandStation_LookingAt_4p"));
    struct Params_ExecuteUbergraph_BP_StandStation_LookingAt_4p {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_StandStation_LookingAt_4p params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
