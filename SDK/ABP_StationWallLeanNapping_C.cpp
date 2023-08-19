#include "ABP_StationWallLeanNapping_C.hpp"
#include "ABP_Station_Propless1p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStationArchitectComponent.hpp"
ABP_StationWallLeanNapping_C* ABP_StationWallLeanNapping_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Ground/BP_StationWallLeanNapping.BP_StationWallLeanNapping_C");
    return (ABP_StationWallLeanNapping_C*)res;
}
void ABP_StationWallLeanNapping_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Ground/BP_StationWallLeanNapping.BP_StationWallLeanNapping_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_StationWallLeanNapping_C::ExecuteUbergraph_BP_StationWallLeanNapping(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Ground/BP_StationWallLeanNapping.BP_StationWallLeanNapping_C.ExecuteUbergraph_BP_StationWallLeanNapping"));
    struct Params_ExecuteUbergraph_BP_StationWallLeanNapping {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_StationWallLeanNapping params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
