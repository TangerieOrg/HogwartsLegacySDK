#include "ABP_StationGroundNapping_C.hpp"
#include "ABP_Station_Propless1p_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStationArchitectComponent.hpp"
ABP_StationGroundNapping_C* ABP_StationGroundNapping_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Ground/BP_StationGroundNapping.BP_StationGroundNapping_C");
    return (ABP_StationGroundNapping_C*)res;
}
void ABP_StationGroundNapping_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Ground/BP_StationGroundNapping.BP_StationGroundNapping_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_StationGroundNapping_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Ground/BP_StationGroundNapping.BP_StationGroundNapping_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_StationGroundNapping_C::ExecuteUbergraph_BP_StationGroundNapping(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Ground/BP_StationGroundNapping.BP_StationGroundNapping_C.ExecuteUbergraph_BP_StationGroundNapping"));
    struct Params_ExecuteUbergraph_BP_StationGroundNapping {
        int32_t EntryPoint; // 0x0
        EEndPlayReason::Type K2Node_Event_EndPlayReason; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_BP_StationGroundNapping params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_EndPlayReason = (EEndPlayReason::Type)K2Node_Event_EndPlayReason;
    ProcessEvent(func, &params);
}
