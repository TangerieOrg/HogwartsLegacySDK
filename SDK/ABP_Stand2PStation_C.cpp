#include "ABP_Stand2PStation_C.hpp"
#include "ABP_Station_Propless2p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UStationArchitectComponent.hpp"
ABP_Stand2PStation_C* ABP_Stand2PStation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Stand/BP_Stand2PStation.BP_Stand2PStation_C");
    return (ABP_Stand2PStation_C*)res;
}
void ABP_Stand2PStation_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Stand/BP_Stand2PStation.BP_Stand2PStation_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Stand2PStation_C::ExecuteUbergraph_BP_Stand2PStation(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Stand/BP_Stand2PStation.BP_Stand2PStation_C.ExecuteUbergraph_BP_Stand2PStation"));
    struct Params_ExecuteUbergraph_BP_Stand2PStation {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Stand2PStation params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
