#include "ABP_StationBrowsingShelvesHigh_C.hpp"
#include "ABP_Station_Propless1p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStationArchitectComponent.hpp"
ABP_StationBrowsingShelvesHigh_C* ABP_StationBrowsingShelvesHigh_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Stand/BP_StationBrowsingShelvesHigh.BP_StationBrowsingShelvesHigh_C");
    return (ABP_StationBrowsingShelvesHigh_C*)res;
}
void ABP_StationBrowsingShelvesHigh_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Stand/BP_StationBrowsingShelvesHigh.BP_StationBrowsingShelvesHigh_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_StationBrowsingShelvesHigh_C::ExecuteUbergraph_BP_StationBrowsingShelvesHigh(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Stand/BP_StationBrowsingShelvesHigh.BP_StationBrowsingShelvesHigh_C.ExecuteUbergraph_BP_StationBrowsingShelvesHigh"));
    struct Params_ExecuteUbergraph_BP_StationBrowsingShelvesHigh {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_StationBrowsingShelvesHigh params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
