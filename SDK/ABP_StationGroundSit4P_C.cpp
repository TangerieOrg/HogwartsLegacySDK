#include "ABP_StationGroundSit4P_C.hpp"
#include "ABP_Station_Propless4p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UStationArchitectComponent.hpp"
ABP_StationGroundSit4P_C* ABP_StationGroundSit4P_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Ground/BP_StationGroundSit4P.BP_StationGroundSit4P_C");
    return (ABP_StationGroundSit4P_C*)res;
}
void ABP_StationGroundSit4P_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Ground/BP_StationGroundSit4P.BP_StationGroundSit4P_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_StationGroundSit4P_C::ExecuteUbergraph_BP_StationGroundSit4P(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Ground/BP_StationGroundSit4P.BP_StationGroundSit4P_C.ExecuteUbergraph_BP_StationGroundSit4P"));
    struct Params_ExecuteUbergraph_BP_StationGroundSit4P {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_StationGroundSit4P params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
