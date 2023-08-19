#include "ABP_Stand4PGossipStation_C.hpp"
#include "ABP_Station_Propless4p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UStationArchitectComponent.hpp"
ABP_Stand4PGossipStation_C* ABP_Stand4PGossipStation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Stand/BP_Stand4PGossipStation.BP_Stand4PGossipStation_C");
    return (ABP_Stand4PGossipStation_C*)res;
}
void ABP_Stand4PGossipStation_C::ExecuteUbergraph_BP_Stand4PGossipStation(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Stand/BP_Stand4PGossipStation.BP_Stand4PGossipStation_C.ExecuteUbergraph_BP_Stand4PGossipStation"));
    struct Params_ExecuteUbergraph_BP_Stand4PGossipStation {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Stand4PGossipStation params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void ABP_Stand4PGossipStation_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Stand/BP_Stand4PGossipStation.BP_Stand4PGossipStation_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
